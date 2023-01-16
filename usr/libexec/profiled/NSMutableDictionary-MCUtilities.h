//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (MCUtilities)
- (void)MCSanitizeRestrictions;	// IMP=0x0010000000016768
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;	// IMP=0x00100000000160de
- (void)MCFilterRestrictionPayloadKeys:(id)arg1;	// IMP=0x0010000000015eba
- (void)MCSetUnionSetting:(id)arg1 values:(id)arg2;	// IMP=0x0010000000015ba5
- (void)MCSetIntersectionSetting:(id)arg1 values:(id)arg2;	// IMP=0x0010000000015890
- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;	// IMP=0x001000000001557b
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;	// IMP=0x0010000000015266
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;	// IMP=0x0010000000014f1e
- (void)MCDeleteBoolRestriction:(id)arg1;	// IMP=0x0010000000014e6d
- (void)MCSetBoolRestriction:(id)arg1 value:(_Bool)arg2;	// IMP=0x0010000000014b9e
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000014b85
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;	// IMP=0x00100000000148ee
- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;	// IMP=0x0010000000014652
@end

