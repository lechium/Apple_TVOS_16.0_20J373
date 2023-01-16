//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueUnnestedProperty
{
    NSArray *_affectingProperties;	// 24 = 0x18
    _Bool _cachedIsaForAutonotifyingIsValid;	// 32 = 0x20
    Class _cachedIsaForAutonotifying;	// 40 = 0x28
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;	// IMP=0x00000000004e6205
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;	// IMP=0x00000000004e6085
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;	// IMP=0x00000000004e5deb
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x00000000004e5cb4
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x00000000004e5b7d
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x00000000004e5a37
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x00000000004e5a04
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x00000000004e5890
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x00000000004e5858
- (Class)isaForAutonotifying;	// IMP=0x00000000004e5708
- (Class)_isaForAutonotifying;	// IMP=0x00000000004e56b7
- (void)_addDependentValueKey:(id)arg1;	// IMP=0x00000000004e56b1
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg1 getAffectingProperties:(id)arg2;	// IMP=0x00000000004e51fe
- (id)description;	// IMP=0x00000000004e5103
- (void)dealloc;	// IMP=0x00000000004e509e
- (id)_initWithContainerClass:(id)arg1 key:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;	// IMP=0x00000000004e4e91

@end

