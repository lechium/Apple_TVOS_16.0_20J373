//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary;

@protocol PKVoIPXPCClient
- (void)voipPayloadReceived:(NSDictionary *)arg1 mustPostCall:(_Bool)arg2 withCompletionHandler:(void (^)(void))arg3;
- (void)voipRegistrationSucceededWithDeviceToken:(NSData *)arg1;

@optional
- (void)voipRegistrationFailed;
@end

