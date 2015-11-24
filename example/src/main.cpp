
#include "testApp.h"

int main( ){
	ofGLFWWindowSettings winSettings;
	winSettings.numSamples = 8;
	winSettings.width = 1920 + 1920 + 1200;
	winSettings.height = 1200;
	winSettings.decorated = false;
	winSettings.multiMonitorFullScreen = true;
	//winSettings.monitor = 1;

#ifdef TARGET_WIN32
	winSettings.width = 1200 * 10;
	winSettings.height = 1920;
#endif

	//	winSettings.width = 1200 * 6;
	//	winSettings.height = 1920 * 2;


	shared_ptr<ofAppBaseWindow> win = ofCreateWindow(winSettings);	// sets up the opengl context!
#ifdef TARGET_OSX
	((ofAppGLFWWindow*)win.get())->setWindowPosition(-1920, 0);
#endif

	ofRunApp(win, shared_ptr<ofBaseApp>(new testApp()));
	ofRunMainLoop();

}
