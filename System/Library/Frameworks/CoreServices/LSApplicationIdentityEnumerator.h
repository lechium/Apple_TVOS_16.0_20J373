//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LSEnumerator.h"

@class LSApplicationRecord, NSEnumerator, NSError, _LSApplicationRecordEnumerator;

__attribute__((visibility("hidden")))
@interface LSApplicationIdentityEnumerator : LSEnumerator
{
    NSError *_ctxError;	// 8 = 0x8
    _LSApplicationRecordEnumerator *_recordEnumerator;	// 16 = 0x10
    LSApplicationRecord *_currentRecord;	// 24 = 0x18
    NSEnumerator *_currentRecordIdentitiesEnumerator;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000196dc
- (id)nextObject;	// IMP=0x0000000000019529
- (id)initWithAppEnumerationOptions:(unsigned long long)arg1;	// IMP=0x00000000000191b1

@end

