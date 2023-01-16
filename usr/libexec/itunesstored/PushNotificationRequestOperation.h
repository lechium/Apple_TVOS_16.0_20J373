//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSURLConnectionResponse, SSVPushNotificationParameters;

@interface PushNotificationRequestOperation : ISOperation
{
    SSVPushNotificationParameters *_parameters;	// 96 = 0x60
    SSURLConnectionResponse *_response;	// 104 = 0x68
    NSString *_userAgent;	// 112 = 0x70
}

- (_Bool)_loadResponseWithAccountIdentifier:(id)arg1 URL:(id)arg2 error:(id *)arg3;	// IMP=0x002000000007cfca
- (void)run;	// IMP=0x001000000007c7c4
@property(copy) NSString *userAgent;
@property(readonly) SSURLConnectionResponse *URLResponse;
- (void)dealloc;	// IMP=0x001000000007c65b
- (id)initWithPushNotificationParameters:(id)arg1;	// IMP=0x001000000007c5fd

@end
