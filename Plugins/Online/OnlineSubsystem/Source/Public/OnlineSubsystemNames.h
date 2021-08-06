// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"


#define OSS_PLATFORM_NAME_PS4		TEXT("PSN")
#define OSS_PLATFORM_NAME_XBOX		TEXT("XBL")
#define OSS_PLATFORM_NAME_WINDOWS	TEXT("WIN")
#define OSS_PLATFORM_NAME_MAC		TEXT("MAC")
#define OSS_PLATFORM_NAME_LINUX		TEXT("LNX")
#define OSS_PLATFORM_NAME_IOS		TEXT("IOS")
#define OSS_PLATFORM_NAME_ANDROID	TEXT("AND")
#define OSS_PLATFORM_NAME_SWITCH	TEXT("SWT")
#define OSS_PLATFORM_NAME_OTHER		TEXT("OTHER")



#ifndef NULL_SUBSYSTEM
#define NULL_SUBSYSTEM FName(TEXT("NULL"))
#endif

#ifndef GOOGLEPLAY_SUBSYSTEM
#define GOOGLEPLAY_SUBSYSTEM FName(TEXT("GOOGLEPLAY"))
#endif

#ifndef IOS_SUBSYSTEM
#define IOS_SUBSYSTEM FName(TEXT("IOS"))
#endif

#ifndef APPLE_SUBSYSTEM
#define APPLE_SUBSYSTEM FName(TEXT("APPLE"))
#endif

#ifndef AMAZON_SUBSYSTEM
#define AMAZON_SUBSYSTEM FName(TEXT("AMAZON"))
#endif

#ifndef GOOGLE_SUBSYSTEM
#define GOOGLE_SUBSYSTEM FName(TEXT("GOOGLE"))
#endif

#ifndef FACEBOOK_SUBSYSTEM
#define FACEBOOK_SUBSYSTEM FName(TEXT("FACEBOOK"))
#endif

#ifndef GAMECIRCLE_SUBSYSTEM
#define GAMECIRCLE_SUBSYSTEM FName(TEXT("GAMECIRCLE"))
#endif

#ifndef STEAM_SUBSYSTEM
#define STEAM_SUBSYSTEM FName(TEXT("STEAM"))
#endif

#ifndef PS4_SUBSYSTEM
#define PS4_SUBSYSTEM FName(TEXT("PS4"))
#endif

#ifndef PS4SERVER_SUBSYSTEM
#define PS4SERVER_SUBSYSTEM FName(TEXT("PS4SERVER"))
#endif

#ifndef LIVE_SUBSYSTEM
#define LIVE_SUBSYSTEM FName(TEXT("LIVE"))
#endif

#ifndef LIVESERVER_SUBSYSTEM
#define LIVESERVER_SUBSYSTEM FName(TEXT("LIVESERVER"))
#endif

#ifndef THUNDERHEAD_SUBSYSTEM
#define THUNDERHEAD_SUBSYSTEM FName(TEXT("THUNDERHEAD"))
#endif

#ifndef MCP_SUBSYSTEM
#define MCP_SUBSYSTEM FName(TEXT("MCP"))
#endif

#ifndef MCP_SUBSYSTEM_EMBEDDED
#define MCP_SUBSYSTEM_EMBEDDED FName(TEXT("MCP:EMBEDDED"))
#endif

#ifndef TENCENT_SUBSYSTEM
#define TENCENT_SUBSYSTEM FName(TEXT("TENCENT"))
#endif

#ifndef WECHAT_SUBSYSTEM
#define WECHAT_SUBSYSTEM FName(TEXT("WeChat"))
#endif

#ifndef TWITCH_SUBSYSTEM
#define TWITCH_SUBSYSTEM FName(TEXT("TWITCH"))
#endif

#ifndef SWITCH_SUBSYSTEM
#define SWITCH_SUBSYSTEM FName(TEXT("SWITCH"))
#endif

#ifndef OCULUS_SUBSYSTEM
#define OCULUS_SUBSYSTEM FName(TEXT("Oculus"))
#endif

#ifndef SAMSUNG_SUBSYSTEM
#define SAMSUNG_SUBSYSTEM FName(TEXT("SAMSUNG"))
#endif

#ifndef QUAIL_SUBSYSTEM
#define QUAIL_SUBSYSTEM FName(TEXT("Quail"))
#endif

#ifndef EOS_SUBSYSTEM
#define EOS_SUBSYSTEM FName(TEXT("EOS"))
#endif
