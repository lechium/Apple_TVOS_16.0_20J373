//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface CoordinatorPromiseSpecification : NSObject
{
    unsigned long long _archiveSize;	// 8 = 0x8
    unsigned long long _diskSpaceNeeded;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    long long _promiseType;	// 32 = 0x20
    NSNumber *_referenceID;	// 40 = 0x28
    NSDictionary *_streamingZipOptions;	// 48 = 0x30
    NSString *_transferPath;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000016facf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000016fa26

@end

