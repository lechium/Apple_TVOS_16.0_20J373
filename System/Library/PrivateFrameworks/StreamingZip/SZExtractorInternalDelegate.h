//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SZExtractorDelegate;

__attribute__((visibility("hidden")))
@interface SZExtractorInternalDelegate : NSObject
{
    id <SZExtractorDelegate> delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000146b6
@property __weak id <SZExtractorDelegate> delegate; // @synthesize delegate;
- (void)extractionEnteredPassThroughMode;	// IMP=0x000000000001463c
- (void)extractionCompleteAtArchivePath:(id)arg1;	// IMP=0x00000000000145bf
- (void)setExtractionProgress:(double)arg1;	// IMP=0x000000000001455a

@end

