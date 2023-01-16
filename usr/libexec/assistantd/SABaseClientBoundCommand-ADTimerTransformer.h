//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SABaseClientBoundCommand (ADTimerTransformer)
- (id)_ad_timerResponseForResponse:(id)arg1;	// IMP=0x002000000007f1d9
- (id)_ad_timerRequestRepresentation;	// IMP=0x001000000007f1d1
- (id)_ad_transformedHealthSuccessResponse;	// IMP=0x0010000000099748
- (id)_ad_transformedShowActivityRequest;	// IMP=0x0010000000099740
- (id)_ad_transformedMailSuccessResponse;	// IMP=0x00100000000a48c6
- (id)_ad_transformedSendEmailRequest;	// IMP=0x00100000000a48be
- (id)_ad_transformedMapsSuccessResponse;	// IMP=0x00100000000f056d
- (id)_ad_transformedMapsRequest;	// IMP=0x00100000000f0565
- (void)_ad_handleAppLaunchCommandWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000102d84
- (id)_ad_replyCommandValue;	// IMP=0x0010000000104c2f
- (void)_ad_getMessagesRequestValueWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000104c19
- (id)_ad_transformedWorkoutSuccessResponse;	// IMP=0x001000000011ad68
- (id)_ad_transformedWorkoutRequest;	// IMP=0x001000000011ad60
- (id)_ad_aceSettingsResponseCommandRepresentationForSiriResponse:(id)arg1;	// IMP=0x00100000001b9d25
- (id)_ad_settingsRequestRepresentation;	// IMP=0x00100000001b9c9d
- (_Bool)ad_hasCallbacks;	// IMP=0x00100000001bdc54
- (id)ad_callbacks;	// IMP=0x00100000001bdc70
- (id)_ad_alarmResponseForResponse:(id)arg1;	// IMP=0x00100000001da450
- (void)_ad_getAlarmRequestRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001da440
- (id)ad_aceResponseCommandGenericErrorRepresentation;	// IMP=0x001000000023742a
- (id)ad_aceResponseCommandRepresentationWithErrorCode:(long long)arg1 reason:(id)arg2;	// IMP=0x001000000023737e
- (id)_ad_preheatableDomain;	// IMP=0x0010000000271ba2
- (void)_ad_handleAceDomainSignalRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000271ae2
- (void)_ad_getOTTRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000027f718
- (id)ad_OTTRequestRepresentation;	// IMP=0x001000000027f6df
- (_Bool)ad_requiresResponse;	// IMP=0x00100000002cbf59
@end

