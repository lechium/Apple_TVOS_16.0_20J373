//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIMenu;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerToolbarMenuSearchResult : NSObject
{
    _Bool _pipMenu;	// 8 = 0x8
    UIMenu *_foundMenu;	// 16 = 0x10
    unsigned long long _foundIndex;	// 24 = 0x18
}

+ (id)searchResultForMenu:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0060000000009278
+ (id)searchResultForPiPMenuAtIndex:(unsigned long long)arg1;	// IMP=0x0060000000009247
- (void).cxx_destruct;	// IMP=0x0000000000009237
@property(readonly, nonatomic, getter=isPiPMenu) _Bool pipMenu; // @synthesize pipMenu=_pipMenu;
@property(readonly, nonatomic) unsigned long long foundIndex; // @synthesize foundIndex=_foundIndex;
@property(readonly, nonatomic) UIMenu *foundMenu; // @synthesize foundMenu=_foundMenu;
- (id)initWithMenu:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000000000919d

@end
