//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WatchListKit/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol WLKInstallable <NSObject>
@property(readonly, copy, nonatomic) NSURL *appStoreURL;
@property(readonly, copy, nonatomic) NSArray *appAdamIDs;
@property(readonly, copy, nonatomic) NSArray *appBundleIDs;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *name;
- (NSURL *)appIconURLForSize:(struct CGSize)arg1;

@optional
@property(readonly, nonatomic) _Bool forceDSIDlessInstall;
@end

