//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppContext, NSError, NSHTTPCookieStorage, NSString, NSURL, VSAppDeviceConfig, VSAuditToken, VSStateMachine;
@protocol VSApplicationDelegate;

__attribute__((visibility("hidden")))
@interface VSApplication : NSObject
{
    _Bool _shouldAllowRemoteInspection;	// 8 = 0x8
    NSURL *_bootURL;	// 16 = 0x10
    IKAppContext *_appContext;	// 24 = 0x18
    id <VSApplicationDelegate> _delegate;	// 32 = 0x20
    VSAuditToken *_auditToken;	// 40 = 0x28
    VSStateMachine *_stateMachine;	// 48 = 0x30
    VSAppDeviceConfig *_appDeviceConfig;	// 56 = 0x38
    NSHTTPCookieStorage *_cookieStorage;	// 64 = 0x40
    NSError *_failureToStart;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000045995
@property(retain, nonatomic) NSError *failureToStart; // @synthesize failureToStart=_failureToStart;
@property(retain, nonatomic) NSHTTPCookieStorage *cookieStorage; // @synthesize cookieStorage=_cookieStorage;
@property(retain, nonatomic) VSAppDeviceConfig *appDeviceConfig; // @synthesize appDeviceConfig=_appDeviceConfig;
@property(retain, nonatomic) VSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) _Bool shouldAllowRemoteInspection; // @synthesize shouldAllowRemoteInspection=_shouldAllowRemoteInspection;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) __weak id <VSApplicationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, copy, nonatomic) NSURL *bootURL; // @synthesize bootURL=_bootURL;
- (id)viewElementRegistry;	// IMP=0x00000000000454c4
- (id)activeDocument;	// IMP=0x0000000000045465
- (id)appLaunchParams;	// IMP=0x0000000000045406
- (id)userDefaultsStorage;	// IMP=0x00000000000453fe
- (id)vendorStorage;	// IMP=0x00000000000453f6
- (id)localStorage;	// IMP=0x00000000000453ee
- (id)vendorIdentifier;	// IMP=0x00000000000453e6
- (id)appIdentifier;	// IMP=0x000000000004538f
- (id)appJSURL;	// IMP=0x000000000004537d
- (_Bool)shouldIgnoreJSValidation;	// IMP=0x0000000000045375
- (_Bool)appIsTrusted;	// IMP=0x000000000004536d
- (void)willPerformXhrRequest:(id)arg1;	// IMP=0x0000000000045353
- (id)sourceApplicationAuditTokenDataForContext:(id)arg1;	// IMP=0x0000000000045303
- (id)sourceApplicationBundleIdentifierForContext:(id)arg1;	// IMP=0x00000000000452b3
- (id)xhrSessionConfigurationForContext:(id)arg1;	// IMP=0x0000000000045208
- (id)objectForPlayer:(id)arg1;	// IMP=0x0000000000045200
- (id)objectForPlaylist:(id)arg1;	// IMP=0x00000000000451f8
- (id)objectForMediaItem:(id)arg1;	// IMP=0x00000000000451f0
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x000000000004517b
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;	// IMP=0x0000000000045092
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000044fdc
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;	// IMP=0x0000000000044f98
- (_Bool)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000044f90
- (id)deviceConfigForContext:(id)arg1;	// IMP=0x0000000000044f7e
- (void)appDocumentForDocument:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044ce1
- (void)sendErrorWithMessage:(id)arg1;	// IMP=0x0000000000044c6d
- (void)evaluate:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044be7
- (void)stop;	// IMP=0x0000000000044ba3
- (void)start;	// IMP=0x0000000000044b5f
- (void)transitionToInvalidState;	// IMP=0x0000000000044aff
- (void)transitionToStoppingState;	// IMP=0x0000000000044ac2
- (void)transitionToReadyState;	// IMP=0x0000000000044a25
- (void)transitionToNotifyingOfFailureToStartState;	// IMP=0x0000000000044918
- (void)transitionToStartingState;	// IMP=0x000000000004483b
- (void)dealloc;	// IMP=0x000000000004478a
- (id)initWithBootURL:(id)arg1;	// IMP=0x00000000000444e8
- (id)init;	// IMP=0x0000000000044479
- (oneway void)release;	// IMP=0x000000000001a9b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

