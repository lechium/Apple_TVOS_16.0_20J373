//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEExtensionTunnelProviderHostProtocol-Protocol.h>

@class NSData, NSString;

@protocol NEExtensionPacketTunnelProviderHostProtocol <NEExtensionTunnelProviderHostProtocol>
- (void)requestSocket:(_Bool)arg1 interface:(NSString *)arg2 local:(NSData *)arg3 remote:(NSData *)arg4 completionHandler:(void (^)(NSFileHandle *))arg5;
@end

