//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableGenericNotification : NSObject
{
}

+ (id)_generateNotificationFromPayload:(id)arg1 config:(id)arg2;	// IMP=0x0010000000288c22
+ (id)_generateDialogRequestFromPayload:(id)arg1 config:(id)arg2;	// IMP=0x001000000028879f
+ (_Bool)_shouldPresentAlertForPayload:(id)arg1;	// IMP=0x001000000028871b
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;	// IMP=0x0010000000288000

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

