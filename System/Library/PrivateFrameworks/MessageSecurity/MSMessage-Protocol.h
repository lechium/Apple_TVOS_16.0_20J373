//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageSecurity/NSObject-Protocol.h>

@class MSDecodeOptions, NSData;

@protocol MSMessage <NSObject>
+ (id)decodeMessageSecurityObject:(NSData *)arg1 options:(MSDecodeOptions *)arg2 error:(id *)arg3;
- (NSData *)encodeMessageSecurityObject:(id *)arg1;
@end

