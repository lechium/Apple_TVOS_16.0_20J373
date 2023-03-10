//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentContainer;

@interface RMSubscribedStatusKeyPathUpdater : NSObject
{
    NSPersistentContainer *_persistentContainer;	// 8 = 0x8
}

+ (id)sharedUpdater;	// IMP=0x002000000008c3a5
- (void).cxx_destruct;	// IMP=0x002000000008d791
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (_Bool)_updateSubscribedStatusKeyPathsWithFetchPredicate:(id)arg1;	// IMP=0x001000000008d16d
- (_Bool)notifyStatusDidChangeForKeyPaths:(id)arg1 managementSourceIdentifier:(id)arg2;	// IMP=0x001000000008cd61
- (_Bool)notifyStatusDidChangeForKeyPathsByManagementSourceObjectID:(id)arg1;	// IMP=0x001000000008cc76
- (_Bool)notifyStatusDidChangeForKeyPaths:(id)arg1;	// IMP=0x001000000008c58e
- (_Bool)notifyStatusDidChangeForKeyPath:(id)arg1;	// IMP=0x001000000008c534
- (_Bool)notifyStatusDidChangeForDeclarations;	// IMP=0x001000000008c4d0
- (id)initWithPersistentContainer:(id)arg1;	// IMP=0x001000000008c465

@end

