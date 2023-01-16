//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSTask.h"

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSConcreteTask : NSTask
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
    CDUnknownBlockType _terminationHandler;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_dsrc;	// 32 = 0x20
    long long _suspendCount;	// 40 = 0x28
    int _pid;	// 48 = 0x30
    _Atomic unsigned long long __exitRunningInfo;	// 56 = 0x38
    BOOL _qos;	// 64 = 0x40
    _Atomic _Bool _isSpawnedProcessDisclaimed;	// 65 = 0x41
}

- (void)setStartsNewProcessGroup:(_Bool)arg1;	// IMP=0x0000000000576cef
- (int)processIdentifier;	// IMP=0x0000000000576cb8
- (int)_procid;	// IMP=0x0000000000576ca6
- (void)dealloc;	// IMP=0x0000000000576b81
- (id)init;	// IMP=0x0000000000576b10
- (long long)suspendCount;	// IMP=0x0000000000576ad9
- (_Bool)resume;	// IMP=0x0000000000576ab0
- (_Bool)suspend;	// IMP=0x0000000000576a87
- (void)terminateTask;	// IMP=0x0000000000576a75
- (void)terminate;	// IMP=0x0000000000576a6b
- (void)interrupt;	// IMP=0x00000000005769ee
- (id)taskDictionary;	// IMP=0x000000000057688e
- (void)setTaskDictionary:(id)arg1;	// IMP=0x00000000005767ce
- (void)setStandardError:(id)arg1;	// IMP=0x00000000005767b7
- (void)setStandardOutput:(id)arg1;	// IMP=0x00000000005767a0
- (void)setStandardInput:(id)arg1;	// IMP=0x000000000057668d
- (id)standardError;	// IMP=0x000000000057667c
- (id)standardOutput;	// IMP=0x000000000057666b
- (id)standardInput;	// IMP=0x000000000057651f
- (id)currentDirectoryPath;	// IMP=0x000000000057650e
- (id)preferredArchitectures;	// IMP=0x00000000005764fd
- (id)arguments;	// IMP=0x00000000005764ec
- (id)environment;	// IMP=0x00000000005764db
- (id)launchPath;	// IMP=0x0000000000576386
- (void)setLaunchPath:(id)arg1;	// IMP=0x0000000000576368
- (void)setEnvironment:(id)arg1;	// IMP=0x0000000000576326
- (void)setCurrentDirectoryPath:(id)arg1;	// IMP=0x0000000000576308
- (void)setPreferredArchitectures:(id)arg1;	// IMP=0x00000000005762ea
- (void)setArguments:(id)arg1;	// IMP=0x000000000057616d
- (void)_withTaskDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000000005760dc
- (void)waitUntilExit;	// IMP=0x0000000000575f00
- (_Bool)launchWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005746c6
- (_Bool)launchAndReturnError:(id *)arg1;	// IMP=0x0000000000574652
- (void)launch;	// IMP=0x0000000000574601
- (_Bool)isRunning;	// IMP=0x00000000005745dd
- (long long)terminationReason;	// IMP=0x000000000057452f
- (long long)_platformExitInformation;	// IMP=0x0000000000574497
- (int)terminationStatus;	// IMP=0x00000000005743e9
- (void)setTerminationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005743d7
- (void)_setTerminationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000574299
- (CDUnknownBlockType)terminationHandler;	// IMP=0x0000000000574235
- (_Bool)isSpawnedProcessDisclaimed;	// IMP=0x0000000000574223
- (void)setSpawnedProcessDisclaimed:(_Bool)arg1;	// IMP=0x0000000000574213
- (void)setQualityOfService:(long long)arg1;	// IMP=0x0000000000574194
- (long long)qualityOfService;	// IMP=0x0000000000574151

@end

