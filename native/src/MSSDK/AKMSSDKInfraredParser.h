/*
 * Copyright 2012 AS3NUI
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
#ifndef KinectExtension_AKMSSDKInfraredParser_h
#define KinectExtension_AKMSSDKInfraredParser_h

#include "../ExtensionConfig.h"
#ifdef AIRKINECT_TARGET_MSSDK

class AKMSSDKInfraredParser
{
public:

	AKMSSDKInfraredParser();
	~AKMSSDKInfraredParser();

	void setImageSize(int width, int height);
	int getWidth();
	int getHeight();
	int getNumPixels();

	void setNuiSensor(INuiSensor* nuiSensor);
	void setInfraredFrameHandle(HANDLE infraredFrameHandle);
	void setInfraredFrameTimeout(int infraredFrameTimeout);

	void parseData();

	unsigned int* getImageByteArray();

private:

	INuiSensor* _nuiSensor;
	HANDLE _infraredFrameHandle;
	int	_infraredFrameTimeout;

	int _width;
	int _height;
	int _numPixels;

	unsigned int* _imageByteArray;

	void updateByteArrayLengths();

	void updateImageByteArrayLength();

};

#endif
#endif