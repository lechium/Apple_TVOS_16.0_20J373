//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSUUID, SFEventMessage, SFRequestMessage, SFResponseMessage, SFService;

@protocol SDXPCServiceInterface
- (void)serviceSendResponse:(SFResponseMessage *)arg1;
- (void)serviceSendRequest:(SFRequestMessage *)arg1;
- (void)serviceSendFrameType:(unsigned char)arg1 data:(NSData *)arg2 peer:(NSUUID *)arg3;
- (void)serviceSendEvent:(SFEventMessage *)arg1;
- (void)serviceUpdate:(SFService *)arg1;
- (void)serviceActivate:(SFService *)arg1 completion:(void (^)(NSError *))arg2;
@end

