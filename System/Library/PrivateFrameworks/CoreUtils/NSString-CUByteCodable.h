//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CUByteCodable)
+ (id)createWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000c423e
- (id)encodedDataAndReturnError:(id *)arg1;	// IMP=0x00100000000c37fe
- (const char *)encodedBytesAndReturnLength:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00100000000c378b
@end

