//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (TextureDataLoading)
+ (id)currentNibLoadingBundle;	// IMP=0x00500000007ee5dc
+ (void)popNibLoadingBundle;	// IMP=0x00500000007ee5a7
+ (void)pushNibLoadingBundle:(id)arg1;	// IMP=0x00500000007ee4fd
+ (id)currentNibPath;	// IMP=0x00500000007ee471
+ (void)popNibPath;	// IMP=0x00500000007ee43c
+ (void)pushNibPath:(id)arg1;	// IMP=0x00500000007ee350
- (id)dataForResourceName:(id)arg1;	// IMP=0x00100000007a1799
- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;	// IMP=0x00100000007ee27e
- (id)_preferredEnglishLocalizationBundle;	// IMP=0x0010000000b6cd1a
@end

