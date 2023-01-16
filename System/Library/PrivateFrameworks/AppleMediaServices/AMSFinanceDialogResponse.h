//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSDialogRequest, AMSURLTaskInfo, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSFinanceDialogResponse : NSObject
{
    _Bool _containsCommerceUIURL;	// 8 = 0x8
    NSDictionary *_dialogDictionary;	// 16 = 0x10
    AMSDialogRequest *_dialogRequest;	// 24 = 0x18
    long long _kind;	// 32 = 0x20
    NSDictionary *_responseDictionary;	// 40 = 0x28
    AMSURLTaskInfo *_taskInfo;	// 48 = 0x30
}

+ (_Bool)_shouldSendOverIDS:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00100000001cda7b
+ (id)_serviceActionFromButton:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00100000001cd3f9
+ (id)_presentIDSDialog:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00100000001cd396
+ (id)_presentDialog:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00100000001cca19
+ (id)_handleAskPermissionRequestWithURL:(id)arg1 account:(id)arg2;	// IMP=0x00100000001cc409
+ (_Bool)_credentialSource:(unsigned long long)arg1 satisfiesAuthenticationType:(unsigned long long)arg2;	// IMP=0x00100000001cc3e8
+ (id)performFinanceDialog:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00100000001ca3b1
+ (id)handleDialogResult:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00100000001c9e19
+ (long long)dialogKindForTaskInfo:(id)arg1 withResponseDictionary:(id)arg2;	// IMP=0x00100000001c99d3
- (void).cxx_destruct;	// IMP=0x00000000001cdacd
@property(copy, nonatomic) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) _Bool containsCommerceUIURL; // @synthesize containsCommerceUIURL=_containsCommerceUIURL;
@property(readonly, copy, nonatomic) NSDictionary *dialogDictionary; // @synthesize dialogDictionary=_dialogDictionary;
- (_Bool)_isCommerceUIURL:(id)arg1 actionType:(long long)arg2 URLType:(long long)arg3;	// IMP=0x00000000001cc795
- (id)_createRequestButtonsFromDialogDictionary:(id)arg1;	// IMP=0x00000000001cbd82
- (id)_enrichedMetricsDictionaryWithFinanceDictionary:(id)arg1;	// IMP=0x00000000001cbc4a
- (id)_createDialogRequest;	// IMP=0x00000000001cb690
- (id)_createActionFromButtonDictionary:(id)arg1 title:(id)arg2;	// IMP=0x00000000001cacb8
- (long long)_actionTypeFromButtonDictionary:(id)arg1;	// IMP=0x00000000001caa6c
- (id)performWithTaskInfo:(id)arg1;	// IMP=0x00000000001ca9df
@property(readonly, nonatomic) AMSDialogRequest *dialogRequest; // @synthesize dialogRequest=_dialogRequest;
- (id)initWithResponseDictionary:(id)arg1 kind:(long long)arg2 taskInfo:(id)arg3;	// IMP=0x00000000001c9747

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

