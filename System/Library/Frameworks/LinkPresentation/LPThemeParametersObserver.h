//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface LPThemeParametersObserver : NSObject
{
    NSHashTable *_clients;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x0000000000044015
- (void).cxx_destruct;	// IMP=0x00000000000442e9
- (void)didChangeThemeParameters;	// IMP=0x0000000000044182
- (void)addClient:(id)arg1;	// IMP=0x00000000000440d9
- (void)didChangeDarkenColorsStatus:(id)arg1;	// IMP=0x00000000000440c7
- (void)dealloc;	// IMP=0x0000000000044052
- (id)init;	// IMP=0x0000000000043f6f

@end

