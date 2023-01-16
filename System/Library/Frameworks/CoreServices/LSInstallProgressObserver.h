//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface LSInstallProgressObserver : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001508d4
@property(nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (void)installationFailedForApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000150723
- (void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;	// IMP=0x00000000001506a7
- (void)sendNotification:(int)arg1 forApplicationWithBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001503de
- (void)sendNotification:(int)arg1 forApplications:(id)arg2 withPlugins:(_Bool)arg3;	// IMP=0x000000000015027c
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000001501d0
- (void)_lsPing:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000015014b
- (void)removeObserver;	// IMP=0x0000000000150078
- (void)addObserver;	// IMP=0x000000000014ffa5
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000014ff3d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
