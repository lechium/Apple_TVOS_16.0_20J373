//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface FlexSongAssetProvider_V1 : NSObject
{
    NSString *_rootFolderPath;	// 8 = 0x8
    NSString *_audioFileExtension;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001128a
@property(retain, nonatomic) NSString *audioFileExtension; // @synthesize audioFileExtension=_audioFileExtension;
@property(retain, nonatomic) NSString *rootFolderPath; // @synthesize rootFolderPath=_rootFolderPath;
- (id)urlToAudioForSegment:(id)arg1;	// IMP=0x0000000000011129
- (id)urlToAudioContainerForSegmentType:(unsigned long long)arg1;	// IMP=0x00000000000110c6
- (id)urlToRoot;	// IMP=0x0000000000011063
- (id)initWithFolderPath:(id)arg1;	// IMP=0x0000000000010fe3

@end

