//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MLDIndexIntegrityFault
{
    NSString *_indexName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000136ee
@property(readonly, nonatomic) NSString *indexName; // @synthesize indexName=_indexName;
- (id)_createErrorWithDescription:(id)arg1;	// IMP=0x00100000000135e3
- (_Bool)attemptRecoveryUsingHandle:(struct sqlite3 *)arg1 withError:(id *)arg2;	// IMP=0x00100000000131d4
- (id)initWithIndex:(id)arg1;	// IMP=0x001000000001315a

@end

