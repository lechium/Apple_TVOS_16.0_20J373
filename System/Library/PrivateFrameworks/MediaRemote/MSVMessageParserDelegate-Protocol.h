//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MSVMessageParser, NSData;

@protocol MSVMessageParserDelegate <NSObject>

@optional
- (void)parser:(MSVMessageParser *)arg1 didParseMessage:(NSData *)arg2;
@end
