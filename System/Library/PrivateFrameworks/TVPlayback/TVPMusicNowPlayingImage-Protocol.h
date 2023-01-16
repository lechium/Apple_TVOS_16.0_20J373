//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/NSCopying-Protocol.h>
#import <TVPlayback/NSObject-Protocol.h>

@class UIImage;

@protocol TVPMusicNowPlayingImage <NSObject, NSCopying>
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic) struct CGSize desiredImageSize;
- (void)loadWithCompletionHandler:(void (^)(id <TVPMusicNowPlayingImage>, UIImage *, NSError *))arg1;
@end

