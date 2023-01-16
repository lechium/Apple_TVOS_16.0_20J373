//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTMessageDelivery.h>

@class IDSBaseMessage, NSArray, NSString;

@interface FTMessageDelivery (IDSRegistrationCenter)

// Remaining properties
@property(readonly) IDSBaseMessage *currentMessage;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property _Bool logToRegistration;
@property(readonly) NSArray *queuedMessages;
@property _Bool retryInAirplaneMode;
@property(readonly) Class superclass;
@property(copy) NSString *userAgent;
@end

