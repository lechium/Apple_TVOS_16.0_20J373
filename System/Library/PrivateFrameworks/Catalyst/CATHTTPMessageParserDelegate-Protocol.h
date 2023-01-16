//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/NSObject-Protocol.h>

@class CATHTTPMessageParser, NSData, NSURL;

@protocol CATHTTPMessageParserDelegate <NSObject>

@optional
- (void)messageParser:(CATHTTPMessageParser *)arg1 didParseRequestWithURL:(NSURL *)arg2;
- (void)messageParser:(CATHTTPMessageParser *)arg1 didParseResponseData:(NSData *)arg2 moreComing:(_Bool)arg3;
- (void)messageParser:(CATHTTPMessageParser *)arg1 didParseRequestData:(NSData *)arg2;
@end
