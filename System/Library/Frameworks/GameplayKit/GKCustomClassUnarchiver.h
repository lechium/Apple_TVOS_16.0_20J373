//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface GKCustomClassUnarchiver : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000043703
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;	// IMP=0x000000000004362b
- (id)_findValidClassName:(id)arg1;	// IMP=0x0000000000043322
- (id)_mangledSwiftClassName:(id)arg1 moduleName:(id)arg2;	// IMP=0x000000000004326f
- (id)_currentAppModuleName;	// IMP=0x00000000000431d9
- (id)init;	// IMP=0x0000000000043173

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

