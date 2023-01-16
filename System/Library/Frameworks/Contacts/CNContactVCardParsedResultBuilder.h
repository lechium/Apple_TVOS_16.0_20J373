//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNMutableContact, NSString;

__attribute__((visibility("hidden")))
@interface CNContactVCardParsedResultBuilder : NSObject
{
    CNMutableContact *_contact;	// 8 = 0x8
    _Bool _empty;	// 16 = 0x10
}

+ (id)labeledValuesWithValues:(id)arg1 transform:(CDUnknownBlockType)arg2 labels:(id)arg3 isPrimaries:(id)arg4;	// IMP=0x001000000001b420
+ (id)os_log;	// IMP=0x001000000001af64
+ (CDUnknownBlockType)contactValueTransformForVCardKey:(id)arg1;	// IMP=0x001000000001a810
+ (id)contactKeyForVCardKey:(id)arg1;	// IMP=0x001000000001a327
- (void).cxx_destruct;	// IMP=0x000000000001b83f
- (long long)personFlags;	// IMP=0x000000000001b808
- (_Bool)setPersonFlags:(long long)arg1;	// IMP=0x000000000001b7d5
- (unsigned long long)personFlagsByAddingContactType:(long long)arg1 toFlags:(unsigned long long)arg2;	// IMP=0x000000000001b7bf
- (long long)contactTypeFromPersonFlags:(long long)arg1;	// IMP=0x000000000001b7ae
- (id)validCountryCodes;	// IMP=0x000000000001b7a6
- (void)setUnknownProperties:(id)arg1;	// IMP=0x000000000001b7a0
- (_Bool)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;	// IMP=0x000000000001b676
- (_Bool)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;	// IMP=0x000000000001b213
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000001b067
- (_Bool)canSetValueForProperty:(id)arg1;	// IMP=0x000000000001b05f
- (id)valueForProperty:(id)arg1;	// IMP=0x000000000001afe8
- (id)build;	// IMP=0x000000000001afc0
- (id)init;	// IMP=0x000000000001aef8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

