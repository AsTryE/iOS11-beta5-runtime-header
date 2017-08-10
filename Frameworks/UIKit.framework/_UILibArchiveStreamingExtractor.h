/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILibArchiveStreamingExtractor : NSObject {
    NSString * _archivePath;
    NSArray * _extractedContentAbsolutePaths;
}

@property (nonatomic, readonly) NSString *archivePath;
@property (nonatomic, readonly) NSArray *extractedContentAbsolutePaths;

+ (id)archiveSubpathByStandardizingArchiveSubpath:(id)arg1;
+ (bool)shouldExtractPathInArchive:(id)arg1 forExtractionRootedAtStandardizedSubpathInArchive:(id)arg2;

- (void).cxx_destruct;
- (id)archivePath;
- (bool)extractArchivePath:(id)arg1 toDirectory:(id)arg2 error:(id*)arg3;
- (id)extractedContentAbsolutePaths;
- (id)initForExtractingArchivePath:(id)arg1;

@end
