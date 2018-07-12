// Fill out your copyright notice in the Description page of Project Settings.

#include "AgoraVoiceCallBack.h"
#include "ScopeLock.h"



UAgoraVoiceCallBack *UAgoraVoiceCallBack::AgoraVoiceCBInstance = nullptr;
UAgoraVoiceCallBack::UAgoraVoiceCallBack(const FObjectInitializer &ObjectInitializer) :UObject(ObjectInitializer)
{

}

UAgoraVoiceCallBack * UAgoraVoiceCallBack::GetAgoraVoiceCBInstance()
{
	FCriticalSection CriticalSection;
	if (AgoraVoiceCBInstance == nullptr)
	{
		FScopeLock Lock(&CriticalSection);
		if (AgoraVoiceCBInstance == nullptr)
		{
			AgoraVoiceCBInstance = NewObject<UAgoraVoiceCallBack>();
			AgoraVoiceCBInstance->AddToRoot();
		}
	}
	return AgoraVoiceCBInstance;
}

void UAgoraVoiceCallBack::onActiveSpeaker(uid_t uid)
{
	
}

void UAgoraVoiceCallBack::onError(int err, const char* msg)
{
	FString Log = UTF8_TO_TCHAR(msg);
	UE_LOG(LogTemp,Error,TEXT("%s"), UTF8_TO_TCHAR(*Log));
}

void UAgoraVoiceCallBack::onJoinChannelSuccess(const char* channel, uid_t uid, int elapsed)
{
	
}

void UAgoraVoiceCallBack::onLeaveChannel(const RtcStats& stats)
{
	
}

void UAgoraVoiceCallBack::onRejoinChannelSuccess(const char* channel, uid_t uid, int elapsed)
{
	
}

void UAgoraVoiceCallBack::onUserJoined(uid_t uid, int elapsed)
{
	
}

void UAgoraVoiceCallBack::onWarning(int warn, const char* msg)
{
	FString Log = UTF8_TO_TCHAR(msg);
	UE_LOG(LogTemp, Warning, TEXT("%s"), UTF8_TO_TCHAR(*Log));
}

void UAgoraVoiceCallBack::onUserOffline(uid_t uid, USER_OFFLINE_REASON_TYPE reason)
{
	
}

void UAgoraVoiceCallBack::onConnectionBanned()
{
	
}

void UAgoraVoiceCallBack::onConnectionInterrupted()
{
	
}

void UAgoraVoiceCallBack::onConnectionLost()
{
	
}

void UAgoraVoiceCallBack::onLastmileQuality(int quality)
{
	
}

void UAgoraVoiceCallBack::onNetworkQuality(uid_t uid, int txQuality, int rxQuality)
{
	
}

void UAgoraVoiceCallBack::onUserMuteAudio(uid_t uid, bool muted)
{
	
}