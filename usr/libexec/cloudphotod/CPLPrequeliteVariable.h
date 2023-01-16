//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLPrequeliteTable, CPLPrequeliteType, NSData, NSString, PQLNameInjection;
@protocol PQLBindable, PQLInjecting;

@interface CPLPrequeliteVariable : NSObject
{
    PQLNameInjection *_injection;	// 8 = 0x8
    id _cachedValue;	// 16 = 0x10
    id _cachedValueIdentifier;	// 24 = 0x18
    _Bool _shouldNotCacheValue;	// 32 = 0x20
    _Bool _allowsNull;	// 33 = 0x21
    _Bool _unique;	// 34 = 0x22
    NSString *_variableName;	// 40 = 0x28
    CPLPrequeliteTable *_table;	// 48 = 0x30
    CPLPrequeliteType *_type;	// 56 = 0x38
    id <PQLBindable> _bindableValueForDefaultValue;	// 64 = 0x40
    id _defaultValue;	// 72 = 0x48
}

+ (id);	// IMP=0x00200000000490ca
+ (id)variableWithName:(id)arg1 type:(id)arg2;	// IMP=0x00100000000490b3
+ (id)indexVariableForVariableWithName:(id)arg1 forTable:(id)arg2;	// IMP=0x0010000000048ae5
+ (id)variableWithName:(id)arg1 defaultValue:(id)arg2 forTable:(id)arg3 type:(id)arg4;	// IMP=0x0010000000048a3b
+ (id)variableWithName:(id)arg1 defaultValue:(id)arg2 type:(id)arg3;	// IMP=0x00100000000489ad
- (void).cxx_destruct;	// IMP=0x00200000000493d4
@property(nonatomic, getter=isUnique) _Bool unique; // @synthesize unique=_unique;
@property(nonatomic) _Bool allowsNull; // @synthesize allowsNull=_allowsNull;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) id <PQLBindable> bindableValueForDefaultValue; // @synthesize bindableValueForDefaultValue=_bindableValueForDefaultValue;
@property(nonatomic) _Bool shouldNotCacheValue; // @synthesize shouldNotCacheValue=_shouldNotCacheValue;
@property(readonly, nonatomic) CPLPrequeliteType *type; // @synthesize type=_type;
@property(readonly, nonatomic) CPLPrequeliteTable *table; // @synthesize table=_table;
@property(readonly, nonatomic) NSString *variableName; // @synthesize variableName=_variableName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000492e1
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000492c0
- (id)columnDefinitionWithDefaultValue:(id)arg1;	// IMP=0x00100000000490f8
@property(readonly, nonatomic) id <PQLInjecting> columnDefinition;
- (id)valueFromSet:(id)arg1 atIndex:(int)arg2;	// IMP=0x0010000000049016
- (id)bindableValueForValue:(id)arg1;	// IMP=0x0010000000048f7f
- (void)discardCachedValue;	// IMP=0x0010000000048f46
- (void)setCachedValue:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0010000000048ed3
- (id)cachedValueForIdentifier:(id)arg1;	// IMP=0x0010000000048e74
- (_Bool)hasCachedValueForIdentifier:(id)arg1;	// IMP=0x0010000000048e29
- (id)redactedDescription;	// IMP=0x0010000000048de0
@property(readonly, copy) NSString *description;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;	// IMP=0x0010000000048d66
@property(readonly, nonatomic) NSData *sql;
- (id)initWithName:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 type:(id)arg4;	// IMP=0x0010000000048b9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

