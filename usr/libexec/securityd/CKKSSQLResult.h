//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKKSSQLResult : NSObject
{
    NSString *_stringValue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000002cfd2
@property(retain) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)asBase64DecodedData;	// IMP=0x001000000002cf1c
- (id)asISO8601Date;	// IMP=0x001000000002ce6f
- (id)asNSNumberInteger;	// IMP=0x001000000002cdd1
- (id)asString;	// IMP=0x001000000002cdbf
- (long long)asNSInteger;	// IMP=0x001000000002cd7b
- (_Bool)asBOOL;	// IMP=0x001000000002cd37
- (id)init:(id)arg1;	// IMP=0x001000000002cccc

@end

