//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ADCommandExecutionContext, NSObject;
@protocol ADCommandCenterRequestDelegate, ADUIServiceDelegate, OS_dispatch_queue;

@interface ADUIService
{
    id <ADCommandCenterRequestDelegate> _requestDelegate;	// 8 = 0x8
    id <ADUIServiceDelegate> _delegate;	// 16 = 0x10
    ADCommandExecutionContext *_lastHandledContext;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)serviceIdentifierForRequestDelegate:(id)arg1;	// IMP=0x00400000001f5110
- (void).cxx_destruct;	// IMP=0x00200000001f6401
- (void)setDelegate:(id)arg1;	// IMP=0x00100000001f63ed
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001f5a89
- (void)_wakeSystemForHandlingCommand;	// IMP=0x00100000001f59a0
- (_Bool)_isWakeSystemSupportedOnPlatform;	// IMP=0x00100000001f5996
- (_Bool)_shouldWakeSystemForHandlingCommand:(id)arg1 executionContext:(id)arg2;	// IMP=0x00100000001f5906
- (void)cancelOperationsForRequestID:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3;	// IMP=0x00100000001f55fc
- (id)controlCenterLockRestrictedCommands;	// IMP=0x00100000001f55f4
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00100000001f55ec
- (id)commandsForDomain:(id)arg1;	// IMP=0x00100000001f5357
- (id)domains;	// IMP=0x00100000001f527d
- (id)handle;	// IMP=0x00100000001f5268
- (id)initWithRequestDelegate:(id)arg1;	// IMP=0x00100000001f5166

@end

