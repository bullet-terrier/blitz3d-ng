#ifndef BB_AUDIO_STREAM_H
#define BB_AUDIO_STREAM_H

#include <cstdio>
#include <fstream>

class AudioStream{
protected:
	std::ifstream in;
	std::streampos start;
	unsigned char *buf;
	int buf_size;
	unsigned int channels,bits,samples,frequency;

public:
	struct Ref{
		AudioStream *stream;
		long pos;

		Ref( AudioStream *s );
		~Ref();

		size_t decode( unsigned char **buf );

		unsigned int getChannels();
		unsigned int getBits();
		unsigned int getFrequency();

		bool eof();
	};

	Ref *getRef();

public:

	AudioStream( int size );
	virtual ~AudioStream();

	virtual bool readHeader()=0;

	virtual void seek( long pos )=0;
	virtual long pos()=0;
	virtual size_t decode()=0;

	bool init( const char *url );
	virtual size_t read( void *ptr, size_t size );
	bool eof();
};


#endif
