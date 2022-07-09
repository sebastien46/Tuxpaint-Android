<img align="left" width="80" height="80" src="https://github.com/tux4kids/Tuxpaint-Android/blob/master/app/src/main/ic_launcher-playstore.png" alt="app icon">

Tux Paint-Android
================
This is [Tux Paint](https://tuxpaint.org/) on Android.


Tux Paint is a free, award-winning drawing program for children ages 3 to 12 (for example, preschool and K-6). Tux Paint is used in schools around the world as a computer literacy drawing activity. It combines an easy-to-use interface, fun sound effects, and an encouraging cartoon mascot who guides children as they use the program.

Background
==========
Tux Paint has been ported from SDL1 to SDL2.
Thus Tux Paint-Android will try to port current Tux Paint to Android platform.
At the start this Tux Paint source code was based on [tuxpaint-sdl2](http://sourceforge.net/p/tuxpaint-sdl2/code/ci/sdl2.0/tree/) 
maintained by Pere Pujal i Carabantes with head commit b48c069b2ff6a0cabf82ec086ff6ef563eaaf3d3, now it has been synced back and forth several times.
As it is currently(Nov 2021) it has been synced also with the work made in the official(SDL1.2 based) work.
https://sourceforge.net/u/perepujal/tuxpaint/ci/sdl2.0/tree/

The main work made by Jianwei Zhang on GSoC 2015 includes:

1. port SDL2, SDL2_image, SDL2_ttf, SDL2_mixer, libpng, gettext, FriBiDi libraries to Android. 
2. based on these libraries and SDL2 Android template project, port current Tux Paint source code to Android.
3. extend Tux Paint further to make Tux Paint welcomed on Android.

Project
========
* Tux Paint-Android/
  * AndroidManifest.xml
    package manifest. Among others, it contains the class name of the main Activity and the package name of the application.
  * build.properties
  * build.xml
    build description file, used by ant. The actual application name is specified here.
    deprecated since the build changed to gradle.
  * default.properties
    holds the target ABI for the application, android-12 and up
  * project.properties
    holds the target ABI for the application, android-12 and up
  * assets/
    The resources folder
  * assets/tuxpaint.zip
    The resources for Tux Paint, including images, sounds etc.
    Note that starting mid October 2016 tuxpaint.zip is no longer in the repository, now it is generated by the mkzip_assets.sh script.
    and starting April 2017 it is no more used, its contents are put uncompressed into the assets folder, to fill the assets folder run
    cd jni/tuxpaint && sh ./mkzipassets.sh
    You will need make and gettext installed for it to perform right.
  * res/
    directory holding resources for your application
  * res/drawable-*
    directories holding icons for different phone hardware.
  * res/values/strings.xml
    strings used in your application, including the application name shown on the phone.
  * res/values-**/strings.xml
    translations to different languages.
  * src/org/libsdl/app/SDLActivity.java
    the Java class handling the initialization and binding to SDL2.
  * src/org/tuxpaint/app/tuxpaintActivity.java
    the Java class handling something related with Tux Paint
  * src/org/tuxpaint/app/ConfigActivity.java
    the Java class handling configuration related with Tux Paint
  * src/org/tuxpaint/app/reqpermsActivity.java
    the Java class handling permissions related with Tux Paint
  * jni/
    directory holding native code
  * jni/Android.mk
    Android makefile that can call recursively the Android.mk files in all subdirectories
  * jni/Application.mk
  * jni/SDL2/
    directory holding the SDL2 library files
  * jni/SDL2_image/
    directory holding the SDL2_image library files
  * jni/SDL2_ttf/
    directory holding the SDL2_ttf library files
  * jni/SDL2_mixer/
    directory holding the SDL2_mixer library files
  * jni/fribidi/
    directory holding the fribidi library files
  * jni/libintl-lite/
    directory holding the intl library files
  * jni/platform_external_libpng/
    directory holding the libpng library files
  * jni/glib/
    directory holding the glib library files
  * jni/harfbuzz/
    directory holding the harfbuzz library files
  * jni/libffi/
    directory holding the libffi library files
  * jni/iconv/
    directory holding the iconv library files
  * jni/pango/
    directory holding the pango library files
  * jni/cairo/
    directory holding the cairo library files
  * jni/pixman/
    directory holding the pixman library files
  * jni/platform_external_libxml2/
    directory holding the xml2 library files
  * jni/SDL2_Pango/
    directory holding the SDL2_Pango library files
  * jni/gdk-pixbuf/
    directory holding the gdk-pixbuf library files
  * jni/libcroco/
    directory holding the libcroco library files
  * jni/librsvg/
    directory holding the librsvg library files
  * jni/tuxpaint/
    directory holding the tuxpaint source files
  * jni/tuxpaint/Android.mk
    Android makefile for creating the tuxpaint shared library

As part of changing the build process from ant to gradle, the previous paths now hangs on app/src/main/

  * settings.gradle
    Indicates the directory gradle should build
  * build.gradle
    Common gradle configuration
  * app/build.gradle
    Configuration specific to the app directory

Dependencies
=================
From **[official Library Requirements](http://www.tuxpaint.org/requirements/)**, Tux Paint requires:

* SDL 
* SDL_image (for PNG support)
* SDL_ttf (for fonts)
* SDL_mixer (optional, for sound)
* SDL_pango (optional, for improved text rendering)
* Cairo (optional, for SVG support)
* FriBiDi (optional, for bidirectional text input)
* libRSVG (optional, for SVG support)
* libPNG
* libpaper (for POSIX printing)
* gettext (for multilingual support)
* libimagequant (from the pngquant2 project; for animated GIF slideshow export)
* SDL_gfx, for rotating brushes

For making Tux Paint working on Android, currently these libraries have been downloaded and built :

* [SDL2 2.0.12](http://www.libsdl.org/download-2.0.php)
* [SDL2_image 2.0.5](http://www.libsdl.org/projects/SDL_image/)
* [SDL2_ttf 2.0.12](http://www.libsdl.org/projects/SDL_ttf/)
* [SDL2_mixer 2.0.0](http://www.libsdl.org/projects/SDL_mixer/)
* [platform_external_libpng 1.6.37](http://libpng.org/pub/png/libpng.html)
* [libintl-lite 0.5](http://sourceforge.net/projects/libintl-lite/)
	Instead of [official gettext library](http://www.gnu.org/software/gettext/)(meeting issues on Android ), an alternative similar library called libintl-lite is used and extended for tuxpaint.
* [FriBiDi 0.19.6](http://www.fribidi.org/)
* [SDL2_Pango 0.1.2](http://sourceforge.net/projects/tuxpaint-sdl2/files/SDL2_Pango/)
	This is a modification by Pere on [official version](http://sdlpango.sourceforge.net/).
* [librsvg 2.40.9](https://wiki.gnome.org/Projects/LibRsvg)

However, these libraries will depend on more libraries, thus another libraries have been downloaded and built :

* [platform_external_freetype 2.10.1](https://www.freetype.org/)
* [fontconfig 2.13.92](http://www.freedesktop.org/wiki/Software/fontconfig/)
* [cairo 1.14.0](http://cairographics.org/)
* [pango 1.37.1](http://www.pango.org/)
* [glib 2.53.3](https://developer.gnome.org/glib/)
* [pixman 0.21.2](http://www.pixman.org/)
* [harfbuzz 0.9.41](http://www.freedesktop.org/wiki/Software/HarfBuzz/)
* [platform_external_libxml2 2.9.2](https://github.com/android/platform_external_libxml2)
	unoffcial but forked from Github Android external library
* [libffi 3.3](https://www.sourceware.org/libffi/)
* [libiconv 1.14](http://www.gnu.org/software/libiconv/)
* [gdk-pixbuf 2.31.4](https://developer.gnome.org/gdk-pixbuf/)
* [libcroco 0.6.8](http://ftp.gnome.org/pub/GNOME/sources/libcroco/)

**Note:** libpaper will not be compiled, since it may be not fit for Android.

Features
========
* Features support
	* Tools: Paint, Stamp, Lines, Shapes, Text, Label, Magic, Undo, Redo, Eraser, New, Open, Save, Print and Quit
	* Stamp: All
	* Brushed: All
	* Shapes: All
	* Color: All
	* Sound: Enabled
	* Magic plugins: All
	* i18n: Enabled
	* SDL2_Pango: Enabled
	* Screen keybord: Enabled
	* RSVG: Enabled

Build
========
* Linux system
* Android SDK
    Starting november 2021, android-support-v4.jar is no more needed.
* Android NDK (compiling tested with the 17c and 21 releases of the ndk tools)
* Tuxpaint-Android source code
* Eclipse & ADT (optional)
* Git (optional)

Android Studio
=============
This application has been tested and will build in Android Studio (last test on Chipmunk, 2021.2.1 patch 1).
Steps to run in Android Studio:
* Open Android Studio
* File -> New -> Project From Version Control...
* Paste in this repository URL if you've setup github already, otherwise setup github
* In Android Studio `Build Variants` window, select variant and target ABI if applicable
* Run -> Edit Configurations...
* Select `APK from app bundle` for `Deploy` to avoid library build

You should be able to now make the project and run it on any device, as well as generate signed bundles / apk.
If for whatever reason the gradle build copy fails to bring in the assets, the manual way is still available:
* Create folder `app/src/main/assets`
* Copy `app/src/main/jni/tuxpaint/data` folder to `app/src/main/assets/data`
* Copy `app/src/main/jni/tuxpaint/src/tuxpaint.cfg-android` to `app/src/main/assets/etc/tuxpaint.cfg`

Install & Run
=============
If you want to (re)fill the assets dir run:
```
cd app/src/main/jni/tuxpaint && ./mkzip_assets.sh
```

If you have gradle, then run from the base directory:
```
	gradle build
```

If you have ant, deprecated, then:
Recover the build.xml and project.properties files from a previous version, for example from
https://github.com/tux4kids/Tuxpaint-Android/tree/4a51d97dad140f044b2f653ebf43636dda1798cd
and put them into `app/src/main`, then run

```
	cd app/src/main
	ln -s java src
	ndk-build
	ant debug
	ant debug install
```

If you have Eclipse, then run:

1. right click Tux Paint-Android project
2. Run As -> Android Application

Tips for Play
===========
1. Sometimes if you cannot save your painted work, you should make sure:
    * you shall have a storage in /mnt/sdcard/tuxpaint. You can check whether this path can be accessable with command:
    ```
	adb shell
	cd /mnt/sdcard/tuxpaint
    ``` 
    * you shall have your Android device disconnected with your PC sometimes when you are using an old Android device.
2. While tuxpaint can start with some default resources, you can further use your own resources for painting (supposing `/mnt/sdcard/tuxpaint/` is your `datadir`):
    * In the folder `/mnt/sdcard/tuxpaint/brushes`, you can add some images which will be shown and used on `brushes` tool;
    * In the folder `/mnt/sdcard/tuxpaint/fonts`, you can add some extra fonts which will be used on `texts` and `labels` tool;
    * In the folder `/mnt/sdcard/tuxpaint/stamps`, you can add some stamps which will be shown and used on `stamps` tool;
    * In the folder `/mnt/sdcard/tuxpaint/starters`, you can add some images which will be shown and used when `New` menu is clicked;
3. Your work will be hosted in the folder `/mnt/sdcard/TuxPaint/saved` (supposing `/mnt/sdcard/tuxpaint/` is your `savedir`).
4. Different from PC, you can paint with your two fingers or more! This is really interesting :)

Test
=======
* Moto ME525: Android 2.3.6
* Moto G2: Android 5.0.2
* MI PAD: Android 4.4.4
* Wiko Wax: Android 4.3
* Blackview 6000 Android 7.0

Develop
========
If you want to develop futher Tux Paint on the Android, there are some points which might be helpful:

1. Before you come to develop, you shall know a few about Linux, C, Java, JNI and NDK.
2. If you meet some issues or problems, please check following `Issues&Solutions` section;
3. Since `setlocale` is not implemented well by Android, please avoid to use this function;
4. For onscreen keybord on the Android, if you have not set property `onscreen-keyboard` and `onscreen-keyboard-layout` in the config file, Tux Paint will try to use Android keybord; otherwise, Tux Paint will follow your decision. You can disable keybord by setting `onscreen-keyboard` to `false`, you can also use tuxpaint's keybord by setting `onscreen-keyboard-layout` to `$layout-name` in the `osk` folder.
5. For debug the Tux Paint, you shall compile with DEBUG macro in the src/debug.h. And then, you can 
  * eithor read the log file `/mnt/sdcard/tuxpaint/tuxpaint.log`;
  * or use `LOGE` and `LOGI` to get message from the `LogCat`.
6. If you want to set or disable the property of Tux Paint, you can modify the configure file `tuxpaint.cfg` in `assets/tuxpaint.zip` of this project to create a new apk. But a better approach is that you can only create or modify the configure file `tuxpaint.cfg` in the `/mnt/sdcard/Android/data/org.tuxpaint/files/` directly on your test Android devices.
7. Although the dependent libraries of Tux Paint have been compiled successfully, some functions of these libraries may not run as supposed or may even get crashed. Thus, please do not trust these compiled libraries too much and be careful. When something becomes strange, test by yourself.
 
Bugs&Comments
=================
Send bugs and comments to Tux Paint developer's mailing list:

	tuxpaint-devel@lists.sourceforge.net

You could also use our bug tracker at
	https://sourceforge.net/p/tuxpaint/bugs/
	
Issues&Solutions
======================

Issue 1: No such file or directory "SDL2/SDL.h"

Problem: NDK compilation failed with following error message.

> In file included from jni/tuxpaint/src/tuxpaint.c:332:0:
> jni/tuxpaint/src/postscript_print.h:38:22: fatal error: SDL2/SDL.h: No such file or directory
> \#include "SDL2/SDL.h"

Solution: The reason is that Make build system of SDL2 will export its headers in the `$(DESTDIR)$(includedir)/SDL2/` (see line 140 of SDL2 Makefile.in. 
Thus other applications shall use headers with `#include SDL2/SDL.h`. 
However, current Android.mk of SDL2 only exports its headers under `include folder`, which means we can only include `SDL.h`
To enable including headers with prefix `SDL2`, we create a new folder named `SDL2` under the `include` folder, and then copy all SDL2 related headers (including SDL2_image and others) to this `SDL2` folder.
Then we can include SDL.h either `SDL.h` or `SDL2/SDL.h`

Issue 2: Missing source file "parse.c" and header file "tp_magic_api.h"

Problem: NDK compilation failed with following error message.

> make: *** No rule to make target "jni/tuxpaint/src/parse.c", needed 
> by "obj/local/armeabi/objs/tuxpaint/src/parse.o".  Stop.

Solution: parse.c is generated from parse.gperf by Makefile (see line 1025). 
Here compile another Tux Paint in linux system with Makefile 
and then copy generated parse.c to jni/tuxpaint/src folder.

tp_magic_api.h is generated from tp_magic_api.h.in by Makefile.
Here compile another Tux Paint in linux system with Makefile 
and then copy generated tp_magic_api.h to jni/tuxpaint/src folder.

Issue 3: Full screen is required.

Problem: Generally the default window screen is 800x600 instead of full screen.
However, if only `fullscreen=yes` is enabled in the tuxpaint.conf, it cannot work as supposed.

Solution: To enable full screen for Android, both `fullscreen=yes` and `native=yes` will be set in the config file.

Issue 4: Android KeyEvent.KEYCODE_BACK cannot be handled successfully.

Problem: The reason is that KeyEvent.KEYCODE_BACK in the Android will be changed into SDLK_AC_BACK in the SDL2.0, which is not processed by Tux Paint.

Solution: From source code, we can find that the function of SDLK_AC_BACK is similar with SDLK_ESCAPE, which is processed by Tux Paint, thus add SDLK_AC_BACK to place where SDLK_ESCAPE exists.

Issue 5: Android 2.3.6 cannot save pictures when USB storage is connected on.

Problem: When Android phone is connected to PC by USB, Android 5.0.2 can save pictures successfully, while Android 2.3.6 will fail. The error message from debug is that "Permission denied".

Solution: See http://stackoverflow.com/questions/8854359/exception-open-failed-eacces-permission-denied-on-android, the solution is that to disconnect Android phone from PC. This works !

Issue 6: Brushes and Stamps cannot be loaded from Android `assets` folder.

Problem: If all image resource is put in the Android `assets` folder, most images can be loaded successfully except `brushes` and `Stamps` resources. 
The reason is that dir walk operation (see dirwalk.c `tp_ftw` method) requires to traverse directories. 
However all images are compressed in the apk file and current NDK AAssetsManager 
seems not support directory traverse operation well.

Previous solution: All images and other resources will be compressed into tuxpaint.zip file in the assets folder. 
tuxpaintActivity java class will decompress tuxpaint.zip into /data/data/org.tuxpaint/files folder, 
then dir walk operation defined in dirwalk.c will work as supposed to load resource. 
This solution had the problem that, in multiuser Androids,  plain users(i.e. not owner) got Tux Paint crashed as they were denied from reading /data/data/org.tuxpaint/files

Current solution: All stuff are put uncompressed into the assets folder, then we use a custom fopen to access it, see the files in `jni/tp-assets-fopen`.
This current solution has the problem that the directories in the assets are hardcoded in the Tux Paint's code.

Issue 7: How to save pictures.

Problem: Generally completed pictures will be saved in the `HOME` on the linux platforms, which is `~/.tuxpaint` folder. However there is no `HOME` system enviroment on the Android.

Solution: On the Android, there are three approaches to deal with saving files. 
First is to use application internal storage, such as `/data/data/your.app.package/files`. 
Second is to use application external storage, such as `/mnt/sdcard/Android/data/your.app.package/files`. 
Third is also to use application external storage, such as `/mnt/sdcard/your.app`. 

Here Tux Paint will be set to search the `tuxpaint.cfg` config file in the first and second path.
However, we recommend users not to rely on the config file in the second path, since sometime external path may not be support.
Instead, if users want to set different configuration, they can achieve this on the screen, which will affect the config file in the first path.

Anyway, the `save` dir and `data` dir will be set in the config file there. The default `save` and `data` dirs will be set the third path, which generally both are `/mnt/sdcard/tuxpaint`. But users can set different `save` dir and `data` dir if they want.

Issue 8: NDK android-21 make old Android devices crashed

Problem: According to (1) http://stackoverflow.com/questions/27091001/how-to-use-mkfifo-using-androids-ndk/27093163#27093163 
and (2) https://code.google.com/p/android/issues/detail?id=73725.
If Tux Paint is compiled based NDK android-21, some old Android devices will crashed.

Solution: Insead of android-21, set APP_PLATFORM in jni/Application.mk to android-19 (or other low version).
2020 Update: In order to be able to compile newer versions of the libraries(SDL2,etc) APP_PLATFORM has been raised to android-21, then minSdkVersion also to 21, that means that Androids older than 5 can not install Tux Paint. If you want to compile Tux Paint for older Androids, the last commit that allows this is c88bcc0fa0fc3584b1d8de44a4efda97860acbd3 from 2020/04/4.

Issue 9: Failed loading some magic plugin libraries due to too many libraries on old Android devices.

Problem: In Android 2.3.6, magic plugin libraries are compilied successfullt. 
However, when launching Tux Paint, some warning words come to show that:

> Failed loading xxx.so: Cannot load library: alloc_info[279]:1231 too many libraries when loading xxx.so

But in Android 5.0.2, there are no warning words about this case.
According to http://stackoverflow.com/questions/14876835/android-maximum-shared-library-size/22143184#22143184, the number of shared libraries loaded by bionic has a limit defined by SO_MAX.
In Android 4.2, SO_MAX is 128. From Android 4.3, SO_MAX is removed.

Solution: The maximal allowable number for Android 2.3.6 is unknown yet, but it seems not too big.
Some solutions are found but seem useless for Tux Paint.
From warning words, the result is that some magic plugin libraries will not be loaded, which means Android old devices will miss some magic tools.
Anyway, the best soultion may be to use Android devices with new versions :(

Issue 10: magic plugin libraries shall be compiled with name "libxxx.so"
Problem: In the Makfile, magic plugin tools will be compiled into shared libraries.
In the Linux platform, these libraries will be named `xxx.so` instead of traditional `libxxx.so`.
In the Android platform, these libraries can also be named `xxx.so` with follow words in the Android.mk file:

```
	LOCAL_MODULE_FILENAME := xxx
```

Then, all of these xxx.so will be compiled into `libs` folder of Tux Paint project and be packed into tuxpaint.apk.

However, there is a strange problem that even `xxx.so` is in the tuxpaint.apk, xxx.so will not be uncompressed into
`/data/data/org.tuxpaint/lib`. It seems that Android system only allow `libxxx.so`.

Solution: Since Android only acccept libxxx.so rather than xxx.so, Android.mk will use following word.

```
	LOCAL_MODULE := xxx
```

Then, all of these libxxx.so will be compiled, packed and unpacked.
Besides that, when tuxpaint does load these shared libraries, the prefix 'lib` shall be exclued:

```c
	#if defined(__ANDROID__)
	    strcpy(objname, objname + 3);
	#endif
```

Issue 11: plugin /data/data/org.tuxpaint/lib/libSDL2.so is missing "get_tool_count" and other functions

Problem: There are some error messages which show that libSDL2.so and some other libraries are missing magic plugin method.
The reason is that all compiled libraries will be put into `/data/data/org.tuxpaint/lib/` folder, including dependent libraries, tuxpaint main libraries and tuxpaint plugin magic libraries.
However, tuxpaint will try to load those non-magic libraries in the defined magic library path, which cause mistake.

Solution: Since tuxpaint can tolerate the non-magic library even it complains, so let it go :)

Issue 12: Annoying joystick events from Android accelerometer

Problem: SDL2 will add Android accelerometer as a joystick device by default.
SDLActivity java class gets the sensor information and send this to native SDL2 library, and then send to Tux Paint, which will cause Tux Paint run joystick related method.
However, the accelerometer information may be useless for Tux Paint,  since joystic events come so frequencely that will disturb current paint activity.

Solution: SDL2 will still take accelerometer as default joystick device.
But SDLActivity java class will not register sensor listener so that the SDL2 native library cannot get accelerometer information and will not send any joystick events to disturb tuxpaint.
Tux Paint will require no modification.

Issue 13: Screen keyboard gets weird on old Android device due to `mbstowcs`

Problem: It is very stange that screen keyboard gets weird on Android 4.4.4, while it runs well on Android 5.0.2.
This is caused by `mbstowcs` function in the `src/im.c`. The reason may be that the Bionic C library on the old Android device implements `mbstowcs` very simply. Refer to https://github.com/android/platform_bionic/commit/29c7f0b4d18f812267c2194b85204e19e41d0387, we can find that previous `mbstowcs` may cause the problem.

```c
size_t mbsrtowcs(wchar_t* dst, const char** src, size_t len, mbstate_t* /*ps*/) {
 const char* s = *src;
 const char* s2 = reinterpret_cast<const char*>(memchr(s, 0, len));

 if (s2 != NULL) {
 len = (size_t)(s2 - s) + 1U;
 }

 if (dst) {
 memcpy(reinterpret_cast<char*>(dst), s, len );
 }

 *src = s + len;
 return len;
}
```

Solution: We implement our own implementation of `mbstowcs` function for Tux Paint. For more information, please check out android_mbstowcs.h and android_mbstowcs.h.

Issue 14: Android has not support "setlocale" which will cause gettext not work.

Problem: Refer to (1) https://www.crystax.net/en/android/ndk, and (2) https://groups.google.com/forum/#!searchin/android-ndk/libintl.h$20/android-ndk/DPDArDwwNyI/U48vdovtPAAJ, NDK seems not to provide locale support in its C and C++ runtimes.
More accurately, refer to official Bionic C library https://github.com/android/platform_bionic:

```c
    static bool __is_supported_locale(const char* locale) {
        return (strcmp(locale, "") == 0 ||
        strcmp(locale, "C") == 0 ||
        strcmp(locale, "C.UTF-8") == 0 ||
        strcmp(locale, "en_US.UTF-8") == 0 ||
        strcmp(locale, "POSIX") == 0);
    }

    char* setlocale(int category, const char* locale_name) {
        // Is "category" valid?
        if (category < LC_CTYPE || category > LC_IDENTIFICATION) {
        errno = EINVAL;
        return NULL;
        }
        // Caller wants to set the locale rather than just query?
        if (locale_name != NULL) {
        if (!__is_supported_locale(locale_name)) {
        // We don't support this locale.
        errno = ENOENT;
        return NULL;
        }
        __bionic_current_locale_is_utf8 = (strstr(locale_name, "UTF-8") != NULL);
        }
        return const_cast<char*>(__bionic_current_locale_is_utf8 ? "C.UTF-8" : "C");
    }
```

Current NDK Bionic really implement `setlocale` but not supports well :(

This issue will cause another problem that since gettext library depends on `setlocale`, 
gettext can be compiled into Android, but cannot run as expected.

Solution: Refer to http://blog.stuff-o-matic.com/post/2013/09/07/Porting-a-C-game-to-Android%2C-the-case-of-Andy-s-Super-Great-Park,
libintl-lite http://sourceforge.net/projects/libintl-lite/ can work.
Currently Tux Paint-Android has used and extended this library instead of gettext.

Issue 15: simplified-chinese cannot show properly.

Problem: While traditional-chinese, japanese and other languages can work, simplified-chinese cannot work yet.

Solution: zh_CN.ttf is not included in current tuxpaint source code.
Instead, this can be downloaded from official tuxpaint website.
Thus, we will include this file into the assets folder.

Issue 16: Some input text from Android system onscreen keyborad cannot show, while some can succeed.

Problem: This is very strange that some text can show on screen, while some cannot.

Solution:
After debugging carefully, the reason is `iswprintf` function.
This function is used to test for a printable wide-character code.
However this function seems not implemented well by Bionic C library.
There is a comment in the bionic implementation https://github.com/android/platform_bionic/blob/master/libc/bionic/wctype.cpp

> // TODO: these only work for the ASCII range; rewrite to dlsym icu4c?  http://b/14499654

Because of this unstable behaviour, this function for testing will not be commented on the Android.

Issue 17: glib2 fails to compile due to valgrind

Problem:: Some error messages about `CMP/MOV` are shown.
The code below in valgrind.h will cause this issue.

```c
    #if defined(PLAT_arm_linux)
        #define __SPECIAL_INSTRUCTION_PREAMBLE                    \
            "mov r12, r12, ror #3  ; mov r12, r12, ror #13 \n\t"  \
            "mov r12, r12, ror #29 ; mov r12, r12, ror #19 \n\t"
```

Solution: Although the reason is found,  the corresponding solution cannot achieve yet. Instead, an alternative approach is that these valgrind related code in the glib2 will be commentted to disable valgrind.
Currently exploring the solution of adding the -marm flag to compile glib, will this break x86 builds?

Issue 18: libharfbuzz_ng seems not be accessable by pango during "System.loadLibrary" call

Problem: It is very strange that libharfbuzz_ng and pango library can compile successfully.
But pango cannot locate symbol `hb_ft_face_create_cached` of harfbuzz_ng when Tux Paint app starts to dynamically load `libpango.so` by `System.loadLibrary`.
Again sometimes cairo will also meet this issue that it cannot locate some symbols of png.

The reason may be that two libraries with same name in system lib path and local app lib path will have different versions.
For example, there is already libharfbuzz_ng in /system/lib folder, which is pre-builted and hosted by Android phone. On the other hand, we compile another version of libharfbuzz_ng for Tux Paint and host this in the apk.
And a strange behavior which is found but not confirmed is that `System.loadLibrary` seems to search libharfbuzz_ng in system path and then user app path. This will cause that compiled libharfbuzz_ng for tuxpaint is not loaded as we supposed, and the system libharfbuzz_ng seems a little old and not implement some new functions yet.

So Android already does pre-built so many libraries but only does export a few headers (see section `Stable APIs` of `NDK Programmer's Guide`). We have to build required libraries by ourselves. 
 
Solution: To prevent loading those system libraries, we will add prefix `tuxpaint_` for all of libraries execept SDL2 related libraries.

Issue 19: Tux Paint will crash when starting in the even number.

Problem: Tux Paint run well in the first time. 
However when we quit normally and start Tux Paint again in the second time, it will crash.
The LogCate will out the following message:

> A/libc(9473): invalid address or address of corrupt block 0xb7c09448 passed to try_realloc_chunk
> A/libc(9473): Fatal signal 11 (SIGSEGV), code 1, fault addr 0xdeadbaad in tid 10750 (SDLThread)

But when we try to start it again in the third time, it will succeed again.

Solution: It seems that Tux Paint will not quit normally when it does quit operation.
We can still find Tux Paint process there by following command:

```
adb shell
ps | grep tuxpaint
```

And if testing further with `ps -t $(threadid)`, we can find that:

After Tux Paint starts successfully, there are many threads.

> ffffffff 00000000 S org.tuxpaint
> ffffffff 00000000 S Heap thread poo
> ffffffff 00000000 S Heap thread poo
> ffffffff 00000000 S Heap thread poo
> ffffffff 00000000 S Signal Catcher
> ffffffff 00000000 S JDWP
> ffffffff 00000000 S ReferenceQueueD
> ffffffff 00000000 S FinalizerDaemon
> ffffffff 00000000 S FinalizerWatchd
> ffffffff 00000000 S HeapTrimmerDaem
> ffffffff 00000000 S GCDaemon
> ffffffff 00000000 S Binder_1
> ffffffff 00000000 S Binder_2
> ffffffff 00000000 S RenderThread
> ffffffff 00000000 S GL updater
> ffffffff 00000000 R SDLThread
> ffffffff 00000000 S Thread-37689
> ffffffff 00000000 S Thread-37690
> ffffffff 00000000 S AudioTrack
> ffffffff 00000000 S Thread-37692
> ffffffff 00000000 S GL updater
> ffffffff 00000000 S Binder_3

After Tux Paint does quit operation, there are still many threads, but real work threads about Tux Paint quit indeed.
SDLThread is the thread for running native Tux Paint code, which indeed quits.

> ffffffff 00000000 S org.tuxpaint
> ffffffff 00000000 S Heap thread poo
> ffffffff 00000000 S Heap thread poo
> ffffffff 00000000 S Heap thread poo
> ffffffff 00000000 S Signal Catcher
> ffffffff 00000000 S JDWP
> ffffffff 00000000 S ReferenceQueueD
> ffffffff 00000000 S FinalizerDaemon
> ffffffff 00000000 S FinalizerWatchd
> ffffffff 00000000 S HeapTrimmerDaem
> ffffffff 00000000 S GCDaemon
> ffffffff 00000000 S Binder_1
> ffffffff 00000000 S Binder_2
> ffffffff 00000000 S RenderThread
> ffffffff 00000000 S AudioTrack
> ffffffff 00000000 S Binder_3

So this imcomplete quit operation will cause Tux Paint cannot start in the even number.
The patch is very simple that will force Tux Paint process quit in the SDLActivity class:

```
     public static void handleNativeExit() {
         SDLActivity.mSDLThread = null;
-        mSingleton.finish();
+//        mSingleton.finish();
+        System.exit(0);
     }
```

This can work fine, but seems not be the best approach.
A more reasonable approach shall be to make Tux Paint quit automatically by themselves.

Issue 20: Printing feature

Problem: Tux paint on Linux platform depends on `lpr` command (see postscript_print.h).
however currently it is not sure whether it can work for Android platform.
The Tux Paint on other platform depend on different native system APIs (see win32_print.h BeOS_print.h macosx_print.h).

Solution: Refer to https://developer.android.com/reference/android/support/v4/print/PrintHelper.html and https://developer.android.com/training/printing/photos.html, we use `JNI` and Android `PrintHelper` to support print feature on the Android.
However, another issue coming likely is that `PrintHelper` seems to depend on Android 4.4 SDK http://www.techotopia.com/index.php/Printing_with_the_Android_Printing_Framework#Options_for_Building_Print_Support_into_Android_Apps.

Issue 21: Label edit feature fails

Problem: start a new draw, go to the label tool, type "abc", save and close tuxpaint, now start again the same draw and try to edit the "abc" string to anything else, the string is corrupted.
Morever, it will not fail in the Android 5.0 devices, while it failed in the Android 4.x devices.

The reason seems that NDK Bionic does not implement well for `fprintf` and `fscanf` functions in the old Android devices. Tuxpaint tries to save and reload label information with following code:

```
	for (i = 0; i < current_node->save_texttool_len; i++)
	{
	  fprintf(lfi, "%lc", (wint_t) current_node->save_texttool_str[i]);
	}
```

and 

```
            for(l = 0; l < new_node->save_texttool_len; l++)
                {
                    fscanf(lfi, "%lc", &tmp_char);
                    new_node->save_texttool_str[l] = tmp_char;
                }
```

However, `%lc` seems not to be parsed in a right way on the old Android devices.

Solution: Instead changing `wchar_t` to `wint_t`, here we change `wchar_t` to `int` so that it is easy to save and load the `int` value from the tmp file. This approach may be not very reasonable, but it works fine in practice.

Issue 22: __ANDROID_API__ macro redefined warnings

If you build with ndk >= r15 the lowest supported SdkVersion is 14, you will get warnings about macro __ANDROID_API__ redefined but it will compile anyway. Note that in order to get support for older Androids you need to compile with ndk r14b and uncomment the line in app/src/main/jni/Application.mk setting NDK_TOOLCHAIN_VERSION to 4.9


Issues and temporary Solution:
===============================

Issue 1: Some ttf fonts cannot show well for English words when default language is foreign language.

Problem: For example, if default language is Chinese, the Chinese words are rendered properly when we are using TEXT or LABEL tool.
However, if we want to enter some English words, sometimes these words can show well, while sometimes these words will become squares.
The reason seems that some fonts only support one language, which will cause other language cannot be rendered.
