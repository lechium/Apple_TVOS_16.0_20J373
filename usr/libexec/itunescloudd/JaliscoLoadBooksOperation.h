//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface JaliscoLoadBooksOperation
{
    _Bool _parserSuccess;	// 8 = 0x8
    NSArray *_queryStoreIDs;	// 16 = 0x10
    NSArray *_books;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ac1ca
@property(nonatomic) _Bool parserSuccess; // @synthesize parserSuccess=_parserSuccess;
@property(retain, nonatomic) NSArray *books; // @synthesize books=_books;
@property(retain, nonatomic) NSArray *queryStoreIDs; // @synthesize queryStoreIDs=_queryStoreIDs;
- (id)metadataFilter;	// IMP=0x00100000000ac140
- (id)queryFilter;	// IMP=0x00100000000ac0d3
- (id)_queryFilterEncodedStringForDAAPNameString:(id)arg1;	// IMP=0x00100000000ac0b0
- (void)main;	// IMP=0x00100000000ab9dc

@end

