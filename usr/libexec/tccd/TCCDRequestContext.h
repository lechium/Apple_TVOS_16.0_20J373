//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TCCDAccessIdentity, TCCDAttributionChain, TCCDService;
@protocol OS_dispatch_semaphore;

@interface TCCDRequestContext : NSObject
{
    unsigned int _userTccdUnavailable;	// 8 = 0x8
    unsigned int _promptingSemaphoreHeld;	// 12 = 0xc
    unsigned long long _spiVersion;	// 16 = 0x10
    NSString *_functionName;	// 24 = 0x18
    NSString *_messageIdentifier;	// 32 = 0x20
    TCCDService *_service;	// 40 = 0x28
    TCCDAttributionChain *_attributionChain;	// 48 = 0x30
    TCCDAccessIdentity *_subjectIdentity;	// 56 = 0x38
    unsigned long long _promptingPolicy;	// 64 = 0x40
    unsigned long long _usageStringPolicy;	// 72 = 0x48
    unsigned long long _recordUpgradePolicy;	// 80 = 0x50
    unsigned long long _promptRightsMask;	// 88 = 0x58
    NSObject<OS_dispatch_semaphore> *_promptingSemaphore;	// 96 = 0x60
    unsigned long long _queryCount;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0010000000032a21
@property(nonatomic) unsigned long long queryCount; // @synthesize queryCount=_queryCount;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *promptingSemaphore; // @synthesize promptingSemaphore=_promptingSemaphore;
@property(nonatomic) unsigned int promptingSemaphoreHeld; // @synthesize promptingSemaphoreHeld=_promptingSemaphoreHeld;
@property(nonatomic) unsigned int userTccdUnavailable; // @synthesize userTccdUnavailable=_userTccdUnavailable;
@property(nonatomic) unsigned long long promptRightsMask; // @synthesize promptRightsMask=_promptRightsMask;
@property(nonatomic) unsigned long long recordUpgradePolicy; // @synthesize recordUpgradePolicy=_recordUpgradePolicy;
@property(nonatomic) unsigned long long usageStringPolicy; // @synthesize usageStringPolicy=_usageStringPolicy;
@property(nonatomic) unsigned long long promptingPolicy; // @synthesize promptingPolicy=_promptingPolicy;
@property(retain, nonatomic) TCCDAccessIdentity *subjectIdentity; // @synthesize subjectIdentity=_subjectIdentity;
@property(retain, nonatomic) TCCDAttributionChain *attributionChain; // @synthesize attributionChain=_attributionChain;
@property(retain, nonatomic) TCCDService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(nonatomic) unsigned long long spiVersion; // @synthesize spiVersion=_spiVersion;
@property(readonly, nonatomic) NSString *identityDescription;
- (id)initForSyncRequestForSubjectBundleIdentifier:(id)arg1 service:(id)arg2;	// IMP=0x0010000000032666
- (id)init;	// IMP=0x001000000003264d
- (void)dealloc;	// IMP=0x0010000000032581
- (id)initWithRequestMessage:(id)arg1 forServer:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003211a
- (void)presentAsynchronousDenialNotificationForService:(id)arg1;	// IMP=0x00100000000235e2
- (void)presentAsynchronousDenialNotificationWithMessage:(id)arg1 buttonTitle:(id)arg2;	// IMP=0x0010000000022e94
- (void)presentSynchronousPromptWithHeader:(id)arg1 message:(id)arg2 allowButtonTitle:(id)arg3 denyButtonTitle:(id)arg4 updatingResult:(id)arg5;	// IMP=0x001000000002438f
- (void)presentSynchronousPromptWithHeader:(id)arg1 message:(id)arg2 allowButtonTitle:(id)arg3 denyButtonTitle:(id)arg4 limitedAllowButtonTitle:(id)arg5 updatingResult:(id)arg6;	// IMP=0x001000000002436c
- (void)presentSynchronousPromptWithHeader:(id)arg1 message:(id)arg2 allowButtonTitle:(id)arg3 denyButtonTitle:(id)arg4 limitedAllowButtonTitle:(id)arg5 withTimeoutInSeconds:(unsigned int)arg6 updatingResult:(id)arg7;	// IMP=0x001000000002378e

@end
