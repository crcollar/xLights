#pragma once

/***************************************************************
 * This source files comes from the xLights project
 * https://www.xlights.org
 * https://github.com/smeighan/xLights
 * See the github commit history for a record of contributing
 * developers.
 * Copyright claimed based on commit dates recorded in Github
 * License: https://github.com/smeighan/xLights/blob/master/License.txt
 **************************************************************/
//  Created by Daniel Kulp on 8/17/15.
//  Copyright (c) 2015 Daniel Kulp. All rights reserved.

#ifdef __WXOSX__
class xlGLCanvas;
class wxMenu;

void xlSetOpenGLRetina(xlGLCanvas &win);
void xlSetRetinaCanvasViewport(xlGLCanvas &win, int &x, int &y, int &x2, int&y2);
double xlTranslateToRetina(xlGLCanvas &win, double x);
void ObtainAccessToURL(const std::string &path);
void EnableSleepModes();
void DisableSleepModes();

void ModalPopup(wxWindow *p, wxMenu &menu);

bool IsMouseEventFromTouchpad();
class AudioManager;
void AddAudioDeviceChangeListener(AudioManager *am);
void RemoveAudioDeviceChangeListener(AudioManager *am);

#define WINDOW_LOCKER(a, b)

#else
#define xlSetOpenGLRetina(a)
#define xlSetRetinaCanvasViewport(w,a,b,c,d)
#define xlTranslateToRetina(a, x) x
#define ObtainAccessToURL(x)
#define EnableSleepModes()
#define DisableSleepModes()
#define ModalPopup(p, a) p->PopupMenu(&a)
#define WINDOW_LOCKER(a, b) wxWindowUpdateLocker b(a)
#define AddAudioDeviceChangeListener(a)
#define RemoveAudioDeviceChangeListener(a)

inline bool IsMouseEventFromTouchpad() {
    return false;
}
#endif
