
#include "testApp.h"

int main( ){
	ofGLFWWindowSettings winSettings;
	winSettings.numSamples = 8;
	winSettings.width = 1920 + 1920 + 1200;
	winSettings.height = 1200;
	winSettings.decorated = false;
	winSettings.multiMonitorFullScreen = true;
	//winSettings.monitor = 1;

	winSettings.width = 5  * 900;
	winSettings.height = 900;

	//	winSettings.width = 1200 * 6;
	//	winSettings.height = 1920 * 2;


	shared_ptr<ofAppBaseWindow> win = ofCreateWindow(winSettings);	// sets up the opengl context!
	((ofAppGLFWWindow*)win.get())->setWindowPosition(-1920, 0);

	ofRunApp(win, shared_ptr<ofBaseApp>(new testApp()));
	ofRunMainLoop();

}
