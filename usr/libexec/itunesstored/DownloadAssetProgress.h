//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSProgress;

@interface DownloadAssetProgress : NSObject
{
    NSProgress *_overallProgress;	// 8 = 0x8
    NSMapTable *_mediaSelectionToProgressMap;	// 16 = 0x10
    unsigned long long _numAudioSelectionsToBeDownloaded;	// 24 = 0x18
    unsigned long long _numSubtitleSelectionsToBeDownloaded;	// 32 = 0x20
    unsigned long long _numMediaSelectionsCompleted;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001c40ce
@property(readonly, nonatomic) unsigned long long numMediaSelectionsCompleted; // @synthesize numMediaSelectionsCompleted=_numMediaSelectionsCompleted;
@property(nonatomic) unsigned long long numSubtitleSelectionsToBeDownloaded; // @synthesize numSubtitleSelectionsToBeDownloaded=_numSubtitleSelectionsToBeDownloaded;
@property(nonatomic) unsigned long long numAudioSelectionsToBeDownloaded; // @synthesize numAudioSelectionsToBeDownloaded=_numAudioSelectionsToBeDownloaded;
- (id)_newProgressForMediaSelection:(id)arg1;	// IMP=0x00100000001c3f63
- (void)setMediaSelectionDidComplete:(id)arg1;	// IMP=0x00100000001c3f59
- (void)setProgress:(double)arg1 forMediaSelection:(id)arg2;	// IMP=0x00100000001c3db8
@property(readonly, nonatomic) double progress;
- (id)init;	// IMP=0x00100000001c3d3c

@end

