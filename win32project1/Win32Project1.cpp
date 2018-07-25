// Win32Project1.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "Win32Project1.h"
#include "MY_OCC_CLASSES.h"

using namespace std;

#define MAX_LOADSTRING 100
//
#define ZOOMBUTTON_ID  1001
#define ZOOMALLBUTTON_ID  1002



// Global Variables:
HINSTANCE hInst;                                // current instance
HWND hWndMain;
WCHAR szTitle[MAX_LOADSTRING];                  // The title bar text
WCHAR szWindowClass[MAX_LOADSTRING];            // the main window class name

// Forward declarations of functions included in this code module:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
POINT P;
HWND occ_panel;
HWND textBox1;
HWND ZoomButton;
HWND ZoomAllButton;

TopoDS_Shape IPE400;



int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Place code here.

    // Initialize global strings
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_WIN32PROJECT1, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Perform application initialization:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WIN32PROJECT1));

    MSG msg;

    // Main message loop:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  FUNCTION: MyRegisterClass()
//
//  PURPOSE: Registers the window class.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WIN32PROJECT1));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WIN32PROJECT1);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   FUNCTION: InitInstance(HINSTANCE, int)
//
//   PURPOSE: Saves instance handle and creates main window
//
//   COMMENTS:
//
//        In this function, we save the instance handle in a global variable and
//        create and display the main program window.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Store instance handle in our global variable

    hWndMain = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

	DWORD dwExStyle = WS_EX_CLIENTEDGE | WS_EX_DLGMODALFRAME;
	DWORD dwStyle = WS_CHILD | WS_VISIBLE | SS_CENTER | SS_CENTERIMAGE | SS_SUNKEN;
	occ_panel = CreateWindowEx(dwExStyle, "STATIC", "Panel 1", dwStyle, 0, 20, 1000, 600, hWndMain, (HMENU)NULL, hInstance, (LPVOID)NULL);
	textBox1 = CreateWindowEx(NULL, "EDIT", NULL, WS_VISIBLE | WS_CHILD | WS_BORDER, 0, 0, 200, 20, hWndMain, NULL, hInst, NULL);
	ZoomButton = CreateWindowEx(NULL, "BUTTON", NULL, WS_VISIBLE | WS_CHILD | WS_BORDER, 210, 0, 30, 30, hWndMain, (HMENU)ZOOMBUTTON_ID, hInst, NULL);
	ZoomAllButton = CreateWindowEx(NULL, "BUTTON", NULL, WS_VISIBLE | WS_CHILD | WS_BORDER, 250, 0, 30, 30, hWndMain, (HMENU)ZOOMALLBUTTON_ID, hInst, NULL);



  
   if (!hWndMain)
   {
      return FALSE;
   }

   ShowWindow(hWndMain, nCmdShow);
   UpdateWindow(hWndMain);
   //
   Aspect_Handle wind_handle = (Aspect_Handle)occ_panel;
   aDisplayConnection = new Aspect_DisplayConnection();
   myGraphicDriver = new OpenGl_GraphicDriver(aDisplayConnection);
   Handle_WNT_Window wind = new WNT_Window((Aspect_Handle)wind_handle);

   mViewer = new V3d_Viewer(myGraphicDriver);
   mViewer->SetDefaultLights();
   mViewer->SetLightOn();


   mView = mViewer->CreateView();
   mView->SetWindow(wind);
   if (!wind->IsMapped()) wind->Map();



   mView->SetBackgroundColor(Quantity_NOC_GRAY12);
   mView->MustBeResized();


   mView->ZBufferTriedronSetup(Quantity_NOC_RED, Quantity_NOC_GREEN, Quantity_NOC_BLUE1, 0.8, 0.05, 12);
   mView->TriedronDisplay(Aspect_TOTP_LEFT_LOWER, Quantity_NOC_WHITE, 0.2, V3d_ZBUFFER);


   // Create AISInteractiveContext

   mContext = new AIS_InteractiveContext(mViewer);

   //
    IPE400 = Make_IPE_Profile(400, 200, 20, 10, gp_Pnt(0, 0, 0), gp_Pnt(0, 0, 6000));
   Handle(AIS_Shape) AIS_IPE = new AIS_Shape(IPE400);

   AIS_IPE->SetMaterial(Graphic3d_NOM_GOLD);
   AIS_IPE->SetDisplayMode(AIS_Shaded);
   mContext->Display(AIS_IPE, Standard_False);
   mContext->SetCurrentObject(AIS_IPE, Standard_False);
   view_initialized = true;

   PickPoint(mView, IPE400, 199, 99);

   view_initialized = true;

   mView->Redraw();
   mView->FitAll();

   //

   return TRUE;
}

//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE:  Processes messages for the main window.
//
//  WM_COMMAND  - process the application menu
//  WM_PAINT    - Paint the main window
//  WM_DESTROY  - post a quit message and return
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
//	case WM_NCHITTEST:
//		if (hWnd == hWndMain)
//			return HTCAPTION;
//		else return HTTRANSPARENT;

	case WM_SIZING:
	{
		if (view_initialized)
		{
			mView->Redraw();
			mView->FitAll();
		}
	}
		break;

	case WM_MOUSEWHEEL:
	{
		int ws = HIWORD(wParam);
		mView->Zoom(0, 0, ws, 0);
	}
	break;
	case WM_MOUSEMOVE: {
		//
		P.x = LOWORD(lParam);
		P.y = HIWORD(lParam);

		
		
		gp_Pnt Picked = PickPoint(mView, IPE400, P.x, P.y);

		string S;
		char xx[30];
		char yy[30];
		char zz[30];
		itoa((Picked.X()), xx, 10);
		itoa((Picked.Y()), yy, 10);
		itoa((Picked.Z()), zz, 10);


		S = "";
		S.append(xx);
		S.append(" ,");
		S.append(yy);
		S.append(" ,");
		S.append(zz);
		SetWindowText(textBox1, S.c_str());
		//
	}
		break;
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Parse the menu selections:
            switch (wmId)
            {
			case WM_CREATE:
				//
				break;


			case ZOOMBUTTON_ID:
			{
				mView->Zoom(0,0,10,10);
			}
			break;

			case ZOOMALLBUTTON_ID:
			{
				mView->FitAll();
			}
			break;


            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Add any drawing code that uses hdc here...

            EndPaint(hWnd, &ps);
			if (view_initialized) mView->Redraw();

			
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Message handler for about box.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
