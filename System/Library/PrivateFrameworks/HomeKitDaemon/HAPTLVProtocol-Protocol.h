//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSData;

@protocol HAPTLVProtocol <NSObject>
- (NSData *)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(NSData *)arg1 error:(id *)arg2;
@end

