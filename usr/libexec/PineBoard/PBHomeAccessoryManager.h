//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, TVCSAccessory, TVCSHome, TVSStateMachine;
@protocol HMMediaDestination, OS_dispatch_queue;

@interface PBHomeAccessoryManager : NSObject
{
    _Bool _homeModuleAvailable;	// 8 = 0x8
    TVSStateMachine *_homeOnboardingStateMachine;	// 16 = 0x10
    TVSStateMachine *_stateMachine;	// 24 = 0x18
    TVCSHome *_home;	// 32 = 0x20
    TVCSAccessory *_accessory;	// 40 = 0x28
    long long _homeConfigurationState;	// 48 = 0x30
    double _waitingForiCloudDataTime;	// 56 = 0x38
    id <HMMediaDestination> _lastSeenMediaDestination;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_observerQueue;	// 72 = 0x48
    NSHashTable *_observers;	// 80 = 0x50
}

+ (_Bool)_isDeviceNameAppleTV:(id)arg1;	// IMP=0x00400000001a799b
+ (_Bool)_isDeviceName:(id)arg1 roomNameInAccessory:(id)arg2;	// IMP=0x00100000001a76bf
+ (_Bool)_isAccessoryInDefaultRoom:(id)arg1;	// IMP=0x00100000001a758c
+ (id)sharedInstance;	// IMP=0x00100000001a5f12
- (void).cxx_destruct;	// IMP=0x00200000001aa5db
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(retain, nonatomic) id <HMMediaDestination> lastSeenMediaDestination; // @synthesize lastSeenMediaDestination=_lastSeenMediaDestination;
@property(nonatomic, getter=_waitingForCloudDataTime, setter=_setWaitingForCloudDataTime:) double waitingForiCloudDataTime; // @synthesize waitingForiCloudDataTime=_waitingForiCloudDataTime;
@property(nonatomic, getter=_homeConfigurationState, setter=_setHomeConfigurationState:) long long homeConfigurationState; // @synthesize homeConfigurationState=_homeConfigurationState;
@property(retain, nonatomic, getter=_accessory, setter=_setAccessory:) TVCSAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic, getter=_home, setter=_setHome:) TVCSHome *home; // @synthesize home=_home;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic, getter=isHomeModuleAvailable) _Bool homeModuleAvailable; // @synthesize homeModuleAvailable=_homeModuleAvailable;
- (void)_disableARCIfNecessary;	// IMP=0x00100000001aa43d
- (void)_notifyOdeonChangedIfNecessaryWithDestination:(id)arg1;	// IMP=0x00100000001aa1c6
- (void)_updateHomeModuleAvailability;	// IMP=0x00100000001a9d45
@property(readonly, nonatomic, getter=_homeOnboardingStateMachine) TVSStateMachine *homeOnboardingStateMachine; // @synthesize homeOnboardingStateMachine=_homeOnboardingStateMachine;
- (void)_moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2;	// IMP=0x00100000001a8707
- (void)_moveOrAddLocalAccessoryToRoomWithName:(id)arg1 inHome:(id)arg2;	// IMP=0x00100000001a83eb
- (void)_configureLocalAccessory;	// IMP=0x00100000001a7e3c
- (void)removeObserver:(id)arg1;	// IMP=0x00100000001a7391
- (void)addObserver:(id)arg1;	// IMP=0x00100000001a72e2
@property(readonly, nonatomic, getter=isOdeonConfigured) _Bool odeonConfigured;
- (void)setupAssistantDidFinish;	// IMP=0x00100000001a728f
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001a7019
- (void)_initializeStateMachine;	// IMP=0x00100000001a6285
- (id)_init;	// IMP=0x00100000001a5fba
- (id)init;	// IMP=0x00100000001a5f79

@end

