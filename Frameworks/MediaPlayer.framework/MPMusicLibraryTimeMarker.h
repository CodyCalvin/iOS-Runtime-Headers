/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MLChapterTOC;



@interface MPMusicLibraryTimeMarker : MPTimeMarker 
{
    NSUInteger _chapterIndex;
    MLChapterTOC *_chapters;
    unsigned int _triedToLoadThumbnail : 1;
}

@property(retain) MLChapterTOC *chapters;
@property NSUInteger chapterIndex;


- (id)thumbnail;
- (void)dealloc;
- (id)chapters;
- (NSUInteger)chapterIndex;
- (void)setChapterIndex:(NSUInteger)arg1;
- (void)setChapters:(id)arg1;

@end