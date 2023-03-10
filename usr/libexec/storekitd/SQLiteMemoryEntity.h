//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface SQLiteMemoryEntity : NSObject
{
    long long _databaseID;	// 8 = 0x8
    NSMutableDictionary *_propertyValues;	// 16 = 0x10
    NSMutableDictionary *_externalPropertyValues;	// 24 = 0x18
}

+ (id)defaultProperties;	// IMP=0x0020000000086bcb
+ (Class)databaseEntityClass;	// IMP=0x0010000000086bba
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x001000000006c117
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000006c102
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000006bfa0
- (void).cxx_destruct;	// IMP=0x001000000008716e
@property(readonly, copy, nonatomic) NSDictionary *externalPropertyValues; // @synthesize externalPropertyValues=_externalPropertyValues;
@property(readonly, copy, nonatomic) NSDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000870d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000086f95
- (unsigned long long)hash;	// IMP=0x0010000000086f7f
- (id)description;	// IMP=0x0010000000086ef9
- (id)valueForExternalProperty:(id)arg1;	// IMP=0x0010000000086ee3
- (id)valueForProperty:(id)arg1;	// IMP=0x0010000000086ecd
- (void)setValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x0010000000086e50
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;	// IMP=0x0010000000086dc4
- (void)setValuesWithDictionary:(id)arg1;	// IMP=0x0010000000086dae
- (void)setValues:(id *)arg1 forProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x0010000000086d31
- (void)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000086ca5
- (void)setExternalValuesWithDictionary:(id)arg1;	// IMP=0x0010000000086c8f
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000086bd8
- (id)initWithPropertyValues:(id)arg1;	// IMP=0x0010000000086b68
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000086ac7
- (id)init;	// IMP=0x0010000000086a52
- (id)dictValueForProperty:(id)arg1;	// IMP=0x0010000000087428
- (id)arrayValueForProperty:(id)arg1;	// IMP=0x00100000000873d1
- (id)urlValueForProperty:(id)arg1;	// IMP=0x001000000008737a
- (id)uuidValueForProperty:(id)arg1;	// IMP=0x0010000000087323
- (id)stringValueForProperty:(id)arg1;	// IMP=0x00100000000872cc
- (id)numberValueForProperty:(id)arg1;	// IMP=0x0010000000087275
- (long long)integerValueForProperty:(id)arg1;	// IMP=0x0010000000087231
- (id)dateValueForProperty:(id)arg1;	// IMP=0x00100000000871da
- (_Bool)boolValueForProperty:(id)arg1;	// IMP=0x0010000000087196

@end

