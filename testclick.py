import click
import os


@click.command()
@click.argument('filename')
@click.argument('newname')
@click.argument('dir')
def rename():
    """
    A little tool that can rename files via CLI. Provide the file name to rename, 
    new file name and path to directory where this file is.

    Here is example:

    filename.extension newfilename.extension /Users/username/MainDIR/DIR/
    """

    if click.filename in os.listdir(dir):
        os.rename(click.filename, click.newname)
        click.secho('File renamed', fg='green')

    else:
        click.secho('File not found. Enter correct file name', fg='red')


if __name__ == '__main__':
    rename()
