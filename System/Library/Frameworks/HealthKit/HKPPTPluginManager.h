//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HKPPTPluginManager : NSObject
{
    NSMutableDictionary *_testClasses;	// 8 = 0x8
    NSMutableDictionary *_builtinTests;	// 16 = 0x10
}

+ (id)sharedPluginManager;	// IMP=0x00600000001b51f4
- (void).cxx_destruct;	// IMP=0x00000000001b5c13
- (void)_loadPPTBundles;	// IMP=0x00000000001b5705
- (void)registerDriverClass:(Class)arg1;	// IMP=0x00000000001b5302
- (Class)classForTestType:(id)arg1;	// IMP=0x00000000001b52ec
- (id)builtinTests;	// IMP=0x00000000001b52ce
- (id)init;	// IMP=0x00000000001b5249

@end

