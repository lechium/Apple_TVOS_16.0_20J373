//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLitePropertyPredicate
{
    NSString *_property;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000029f86c
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x000000000029f7ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029f6d3
- (unsigned long long)hash;	// IMP=0x000000000029f652
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029f647

@end
