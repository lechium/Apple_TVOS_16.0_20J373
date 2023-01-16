//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSKeyValueContainerClass, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueProperty : NSObject
{
    NSKeyValueContainerClass *_containerClass;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;	// IMP=0x00000000004e4e89
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg1;	// IMP=0x00000000004e4dbc
- (id)dependentValueKeyOrKeysIsASet:(_Bool *)arg1;	// IMP=0x00000000004e4db4
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;	// IMP=0x00000000004e4dae
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;	// IMP=0x00000000004e4d9c
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x00000000004e4d96
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x00000000004e4d90
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x00000000004e4d7e
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x00000000004e4d6c
- (Class)isaForAutonotifying;	// IMP=0x00000000004e4d5a
- (id)keyPath;	// IMP=0x00000000004e4d50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e4d45
- (void)dealloc;	// IMP=0x00000000004e4cd8
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;	// IMP=0x00000000004e4c38

@end

